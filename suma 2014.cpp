#include <bits/stdc++.h>
using namespace std;

int dvo(int n){
    int c = 0;
    while(n % 2 == 0 && n > 0){
         c++;
         n /= 2;
    }
    return c;
}

int main(){
    long long t, m, n, k; cin >> t;
    for(int i = 0; i < t; i++){
        cin >> m >> n >> k;
        int c = dvo(k);
        c += dvo(n + m);
        c += dvo(n - m + 1);
        if(c > 1 || k == 0) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    return 0;
}
