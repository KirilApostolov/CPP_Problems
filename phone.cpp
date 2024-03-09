#include <bits/stdc++.h>
using namespace std;

int main () {
    int b, n, c = 0, cc = 0, e, t, lt = 0; cin >> b >> n;
    for(int i = 0; i < n; i++){
        cin >> e >> t;
        if(cc == 0) b = min(100, b + t - lt);
        else b -= (t - lt) * cc;
        if(b <= 0) break;
        if(e == 1){
           cc--;
           c++;
        } else cc++;
        lt = t;
    }
    cout << c;
    return 0;
}

