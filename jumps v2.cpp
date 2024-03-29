#include <bits/stdc++.h>
using namespace std;

int main () {
    long long l, m, n, s = 0, j = 0; cin >> l >> m >> n;

    while(s + 1000 * m + n * 999000 / 2 <= l){
        j += 1000;
        s += 1000 * m + n * 999000 / 2;
        m += 1000 * n;
    }

    while (s <= l) {
        j++;
        s += m;
        m += n;
    }
    cout << j;
    return 0;
}
