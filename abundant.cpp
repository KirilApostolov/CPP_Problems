#include <iostream>
using namespace std;

int main () {
    long long n, s, d = 1, i; cin >> n;
    for(i = 2; i * i < n; i++)
        if(n % i == 0){
            d += i;
            d += n/i;
        }
    if (i * i == n) d += i;
    cout << d << "\n";
    if(d > n) cout << "YES";
    else cout << "NO";
    return 0;
}
