#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    int nc[n];
    int h, m, mk;
    for(int i = 0; i < n; i++) {
        cin >> h >> m >> mk;
        nc[i] = h * 60 + m + mk;
    }
    sort(nc, nc + n);
    cout << nc[n - 1] / 60 << " " << nc[n - 1] % 60;

    return 0;
}
