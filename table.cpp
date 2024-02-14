#include <iostream>
using namespace std;

int main () {
    int n, q = 1, r = -1, c = -1; cin >> n;
    while (q * q < n) q++; q--;
    if (q % 2 != 0)
        if (n - q * q <= q + 1) {
            c = q + 1;
            r = n - q * q;
        } else {
            c = (q + 1) * (q + 1) - n + 1;
            r = q + 1;
        }
    else
    if(n - q * q <= q + 1) {
        c = n - q * q;
        r = q + 1;
    } else {
        c = q + 1;
        r = (q + 1) * (q + 1) - n + 1;
    }

    cout << r << " " << c;
    return 0;
}
