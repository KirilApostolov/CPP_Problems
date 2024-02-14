#include <iostream>
using namespace std;

bool isPrime(int a){
    for(int i = 2; i * i <= a; i++)
        if(a % i == 0 ) return false;
    return true;
}

int main () {
    int n, s = 2, i = 1, p = 2, k; cin >> n;
    while(i < n){
        s += p;
        k = s / p;
        if (isPrime(k)) p = k;
        i++;
    }
    cout << s;
    return 0;
}
