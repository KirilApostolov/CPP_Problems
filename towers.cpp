#include <iostream>
using namespace std;

int main () {
    long long x, y, a, b; cin >> x >> y >> a >> b;
    if (a < b) { swap(a, b); swap(x, y); }
    if (x == y && a == b) cout << a + b;
    else if ( x == y) cout << b + b + 1;
    else if ( a == b) cout << a + b + b;
    else cout << b + b + 1 + b;
    return 0;
}
