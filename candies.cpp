#include <iostream>
using namespace std;

int main () {
    int a, b, c;
    cin >> a >> b >> c;
    if(2 * a < b || 2 * c < b)
        if (a > c) cout << c * 4 + 2;
        else cout << a * 4;
    else if ( 2 * a == b) cout << a * 4;
    else if ( 2 * c == b) cout << c * 4 + 1;
    else cout << b / 2 * 4 + 1 + (b % 2) * 2;

    return 0;
}
