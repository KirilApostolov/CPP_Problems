#include <bits/stdc++.h>
using namespace std;

const int maxM = 1000001;
int bor[maxM];

int main () {
    int n, m, g, ans = 0; cin >> n >> m;
    for(int i = 0; i < n; i++) {
        cin >> g;
        bor[g]++;
    }
    for(int i = 1; i < m; i++) if(bor[i] == 0 && bor[i+1] == 0) ans++;
    cout << ans;
    return 0;
}
