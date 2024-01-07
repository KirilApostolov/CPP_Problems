#include <bits/stdc++.h>
using namespace std;

int main () {
    long long n, a, r;
    cin >> n >> r;
    for (int i = 0; i < n - 1; i++){
        cin >> a;
        r = r * a / __gcd(r, a);
    }
    cout << r;
    return 0;
}
