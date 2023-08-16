#include <iostream>
using namespace std;

int main(){
    int n, i = 1, F = 1;
    cin >> n;
    while ( F < n){i++; F *= i;}
    F /= i; i--;
    int R = 1 + n/F*F;
    if (R > n) R -= F;
    cout << R;
    return 0;
}
