#include <iostream>
using namespace std;

int main () {
    long long n, x;
    cin >> n >> x;
    do {
        cout << n << " " << x << "\n";
        if(x == 0 && n % 2 == 1) x = 1;
        if(x == 1 && n % 2 == 1) x = 0;

        if(x == 1 && n % 2 == 0) x = 2;
        if(x == 2 && n % 2 == 0) x = 1;

        n--;


    } while (n > 0);

    cout << x;
    return 0;
}
