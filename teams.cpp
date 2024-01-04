#include <iostream>
using namespace std;

int main () {
    long long  m, n, k;
    cin >> m >> n;
    k = (m + n)/3;
    k = min(k, m);
    k = min(k, n);
    cout << k;

    return 0;
}
