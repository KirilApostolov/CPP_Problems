#include <bits/stdc++.h>
using namespace std;

const int maxK = 3001;
int kut[maxK];

int main () {
    long long n, m, k, str, br = 0; cin >> n;
    pair<int , int> t[n];
    long long a[n];
    for(int i = 0; i < n; i++){
        cin >> t[i].first;
        t[i].second = i;
        a[i] = 0;
    }
    sort(t, t + n);
    cin >> m;
    for(int i = 0; i < m; i++) {
        cin >> k;
        kut[k]++;
    }
    for(int i = 0; i < n; i++)
        for(long long y = 1; y * t[i].first <= 3000; y++)
            if(kut[y * t[i].first] > 0) {
                str = y * y * y * kut[y * t[i].first];
                m -= kut[y * t[i].first];
                kut[y * t[i].first] = 0;
                br += str;
                a[t[i].second] += str;
            }
    cout << br << " " << m << "\n";
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}

