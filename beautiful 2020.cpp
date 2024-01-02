#include <iostream>
using namespace std;

int main () {
    long long n, c = 0, h, m = 0, ans;
    cin >> n;
    h = n;
    while (h > 0){
        c++;
        h /= 10;
        m = m * 10 + 1;
    }
    ans = (c - 1) * 9;
    for(int i = 1; i < 10; i++)
        if(m * i >= m && m*i <= n) ans++;
    cout << ans;
    return 0;
}
