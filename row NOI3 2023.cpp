#include<iostream>
using namespace std;

int main(){
    long long n, s = 0, x = 0, w = 0, ans; cin >> n;
    while (s <= n){
        x++;
        s += x * x;
        w += x;
    }
    s -= x * x;
    w -= x;
    ans = w + (n - s) / x;
    if((n - s) % x != 0) ans++;
    cout << ans;
	return 0;
}
