#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, sum = 0, j = 0, k; cin >> n;
    int s[n], p[n];
    for(int i = 0; i < n; i++) cin >> s[i];
    for(int i = 0; i < n; i++) cin >> p[i];
    cin >> k;
    int o[k];
    for(int i = 0; i < k; i++) cin >> o[i];
    sort(o, o + k);
    vector<int> t;
    for(int i = 0; i < n; i++)
        if(i + 1 != o[j]) t.push_back(s[i]);
        else j++;
    sort(t.begin(), t.end());
    sort(p, p + n);
    cout << "\n" << "t[] = ";
    for(int i = 0; i < n - k ; i++) cout << t[i] << " ";
    cout << "\n" << "p[] = ";
    for(int i = 0; i < n - k ; i++) cout << p[i] << " ";
    cout << "\n";
    for(int i = 0; i < n - k; i++) {
        cout << p[i] << " " << t[n-k-i - 1] << "\n";
        sum += p[i] * t[n-k-i - 1];
    }
    cout << "\n" << sum;
    return 0;
}
