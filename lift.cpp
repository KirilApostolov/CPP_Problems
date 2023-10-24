#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    int t[4];
    cin >> m >> n;
    for (int i = 0; i < 4; i++) cin >> t[i];
    sort(t, t + 4);
    if(m >= 4 && n >= t[0] + t[1] + t[2] + t[3]) cout << 1;
    else if(m > 1 && t[3] + t[0] <= n && t[1] + t[2] <= n) cout << 2;
    else if(m > 1 && t[1] + t[0] <= n) cout << 3;
    else cout << 4;
    return 0;
}
