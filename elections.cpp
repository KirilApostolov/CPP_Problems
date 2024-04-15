#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, c; cin >> n >> m;
    int e[n] = {0};
    for(int i = 0; i < m; i++){
        cin >> c;
        e[c - 1]++;
    }
    cout << fixed << setprecision(2);
    for(int i = 0; i < n; i++) cout << 100.0 * e[i] / m << "%" << "\n";
    return 0;
}
