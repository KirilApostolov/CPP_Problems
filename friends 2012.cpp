#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, k = 1; cin >> n;
    for (long long i = 2; i <= n; i++) k = k * i / __gcd(k, i);
    cout << k;
    return 0;
}
