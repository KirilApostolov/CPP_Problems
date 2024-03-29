#include <bits/stdc++.h>
using namespace std;

int main () {
    int a, b, r, p , k; cin >> a >> b >> r >> p >> k;
    if (a > b) swap(a, b);
    cout << r * (b - a + 1) + max(0, p * (b - a - 1)) + k * (b - a);
    return 0;
}

