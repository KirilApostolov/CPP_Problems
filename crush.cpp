#include <bits/stdc++.h>
using namespace std;

int main () {
    long long n, s = 0, k = 0, m = 0; cin >> n;
    long long a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        s += a[i];
    }
    for(int i = 0; i < n; i++){
        s -= a[i];
        k += a[i] * a[i];
        m = max(m, s * k);
    }
    cout << m;
    return 0;
}
