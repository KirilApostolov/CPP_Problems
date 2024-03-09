#include<iostream>

using namespace std;

int main() {
    long long p, t, x, y, n, tm = 0, P = 0, B = 0, w; cin >> p >> t >> x >> y >> n;
    for (int i = 1; i <= p; i++) {
        tm += x;
        if (i > 1) P += tm / y - (tm - x) / y;
        else P = tm / y;
        w = min(n, P);
        B += w;
        P -= w;
        if (B >= t) {
            cout << tm - t * y;
            return 0;
        }
    }
    cout << "No";
    return 0;
}

