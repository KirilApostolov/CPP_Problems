#include <bits/stdc++.h>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    pair<int, int> t[n];
    long long ok[n];
    for(int i = 0; i < n; i++){
        cin >> t[i].first;
        t[i].second = i;
        ok[i] = 0;
    }
    int m; cin >> m;
    pair<int, bool> k[m];
    for(int i = 0; i < m; i++) {
        cin >> k[i].first;
        k[i].second = true;
    }
    sort(t, t + n);
    long long sum = 0, br = 0, str, ob;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(k[j].second && k[j].first % t[i].first == 0){
                str = k[j].first / t[i].first;
                ob = str * str * str;
                ok[t[i].second] += ob;
                sum += ob;
                br++;
                k[j].second = false;
            }
    cout << sum << " " << m - br << "\n";
    for(int i = 0; i < n; i++) cout << ok[i] << " ";
    return 0;
}

