#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, w, r = 1, minr = 5000000, t; cin >> n >> w;
    int e[n+1], s[n+1];
    s[0] = 0;
    for(int i = 0; i < n; i++){
        cin >> e[i+1];
        s[i+1] = s[i] + e[i+1];
    }
    for(int l = 1; l <= n; l++){
        t = s[r] - s[l - 1];
        while(t <= w && r < n){
              r++;
              t = s[r] - s[l - 1];
        }
        if( t > w && r - l + 1 < minr) minr = r - l + 1;
    }
    if (minr == 5000000) minr = 0;
    cout << minr;
    return 0;
}
