#include<bits/stdc++.h>
using namespace std;
long long dev(long long c, long long d, long long mn){
    long long b = 0, fff = d * mn / __gcd(d, mn);
    while (fff <= c){
        b += c / fff;
        fff *= mn;
    }
    return b;
}
int main(){
    long long d, a, b; cin >> d >> a >> b;
    cout << min(dev(b, d, 2), dev(b, d, 5)) - min(dev(a - 1, d, 2), dev(a - 1, d, 5));
    return 0;
}
