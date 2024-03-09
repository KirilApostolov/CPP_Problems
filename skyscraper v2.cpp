#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, last = 1; cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i];
    vector<int> first, second, result;
    first.push_back(0);
    for(int i = 1; i < n; i++){
        if (min(a[i-1], b[i-1]) < min(a[i], b[i]) || max(a[i-1], b[i-1]) < max(a[i], b[i])){
            cout << "Impossible!";
            return 0;
        }
        if(min(a[i-1], b[i-1]) >= max(a[i], b[i])){
           if(first.size() < second.size())
               for(int j = 0; j < first.size(); j++) result.push_back(first[j]);
           else
               for(int j = 0; j < second.size(); j++) result.push_back(second[j]);
           first.clear();
           second.clear();
           first.push_back(i);
           last = 1;
 ///          cout << i + 1 << " - 2 - " << a[i-1] << ":" << b[i-1] << " " << a[i] << ":" << b[i] << "\n";
           continue;
        }
        if(a[i-1] >= a[i] && b[i-1] >= b[i]){
            if (last == 1) first.push_back(i);
            else second.push_back(i);
 ///           cout << i + 1 << " - 3 - " << a[i-1] << ":" << b[i-1] << " " << a[i] << ":" << b[i] << "\n";
            continue;
        }
        if (last == 1) {
            second.push_back(i);
            last = 2;
        } else {
            first.push_back(i);
            last = 1;
        }
 ///       cout << i + 1 << " - 4 - " << a[i-1] << ":" << b[i-1] << " " << a[i] << ":" << b[i] << "\n";
    }
    if(first.size() < second.size())
       for(int j = 0; j < first.size(); j++) result.push_back(first[j]);
    else
       for(int j = 0; j < second.size(); j++) result.push_back(second[j]);
    cout << result.size() << "\n";
    for(int i = 0; i < result.size(); i++) cout << result[i] + 1 << " ";
    return 0;
}

