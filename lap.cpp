#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[4], r = 1;
    for(int i = 0; i < 4; i++) cin >> a[i];
    for(int i = 0; i < 4; i++) r = r * a[i] / __gcd(r, a[i]);
    cout << r;
    return 0;
}
