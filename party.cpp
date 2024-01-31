#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, t = 0; cin >> n;
    double mins = 100000;
    int s[n], r[n];
    for(int i = 0; i < n; i++) cin >> s[i];
    for(int i = 0; i < n; i++) {
        cin >> r[i];
        t += r[i];
    }
    for(int i = 0; i < n; i++) mins = min(mins, 1.0 * s[i] * t / r[i]);
    for(int i = 0; i < n; i++) {
        printf("%.2f", s[i] - 1.0 * r[i] * mins / t);
        cout << " ";
    }

  //      cout << round((s[i] - 1.0 * r[i] * mins / t) * 100) / 100 << " ";

    return 0;
}
