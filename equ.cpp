#include <iostream>
using namespace std;

int main () {
    char c;
    long long a = 0, b = 0, r = 0, o, f = 1, z = 1;
    while (cin >> c){
        if(c == '+') f = 2;
        if(c == '-'){
            f = 2;
            z = 2;
        }
        if(c == '*'){
            f = 2;
            z = 3;
        }
        if(c == '=') f = 3;
        if(c - '0' >= 0 && c - '0' <= 9){
            if (f == 1) a = 10 * a + c - '0';
            if (f == 2) b = 10 * b + c - '0';
            if (f == 3) r = 10 * r + c - '0';
        }
    }
    if (z == 1) o = a + b;
    if (z == 2) o = a - b;
    if (z == 3) o = a * b;
    if (o == r) cout << "Yes " << abs(a - b);
    else cout << "No " << o;
    return 0;
}
