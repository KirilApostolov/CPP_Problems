#include <bits/stdc++.h>
using namespace std;

int main () {
    int p, t, x, y, n; cin >> p >> t >> x >> y >> n;
    if (n * p < t || p * x < t * y){
        cout << "No";
        return 0;
    }
    if (n*y > x) cout << x - ((t * y) % x ) % x;
    else if (t % n == 0) cout << (t / n * x) - (t * y);
    else cout << (t / n + 1) * x - ( t * y);
    return 0;
}
