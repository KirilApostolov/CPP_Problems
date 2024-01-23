#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, s, c, ans = 1; cin >> n >> s;
    for(int i = 0; i < n; i++){
        cin >> c;
        ans = ans * c / __gcd(ans, c);
    }
    ans = (s + ans) % 7;
    if(ans == 0) ans = 7;
    cout << ans;
    return 0;
}
