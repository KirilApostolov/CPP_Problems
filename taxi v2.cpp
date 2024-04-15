#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, sum = 0, k, tt; cin >> n;
    long long s[n], p[n];
    for(int i = 0; i < n; i++) cin >> s[i];
    for(int i = 0; i < n; i++) cin >> p[i];
    cin >> k;
    for(int i = 0; i < k; i++) {
        cin >> tt;
        if (tt != 0 ) s[tt - 1] = 0;
    }
    sort(p, p + n);
    sort(s, s + n);
    for(int i = k; i < n; i++) sum += s[i] * p[n - i - 1];
    cout << sum;
    return 0;
}
