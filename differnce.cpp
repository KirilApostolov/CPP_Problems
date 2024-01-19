#include<bits/stdc++.h>
using namespace std;


int main(){
    long long n, a = 0, b = 01; cin >> n;
    for (int i = 0; i < n / 2; i++) a = 10 * a + 9;
    a = a * 10 + 1;
    if(n%2 == 1) a *= 10;
    for (int i = 1; i < n / 2; i++) a = 10 * a;
    b = 1;
    for (int i = 1; i < n / 2; i++) b = 10 * b;
    if(n%2 == 1) b *= 10;
    for (int i = 0; i < n / 2; i++) b = 10 * b + 9;
    cout << a - b;

    return 0;
}
