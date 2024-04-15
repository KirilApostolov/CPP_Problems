#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, maxR = 0, c; cin >> m;
    vector<int> d;
    while(cin >> c) d.push_back(c);
    int n = d.size();
    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++){
            swap(d[i], d[j]);
            int sss = 0;
            for(int x = 0; x < m; x++) sss += d[x];
            maxR = max(maxR, sss);
            for(int x = 0; x + m < n; x++){
                sss -= d[x];
                sss += d[x + m];
                maxR = max(maxR, sss);
            }
            swap(d[i], d[j]);
        }
    cout << maxR;
    return 0;
}
