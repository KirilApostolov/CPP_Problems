#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, m, k; cin >> n >> m >> k;
    cout << n / __gcd(n, __gcd(m, k)) * m / __gcd(n, __gcd(m, k)) * k /__gcd(n, __gcd(m, k));
    return 0;
}
