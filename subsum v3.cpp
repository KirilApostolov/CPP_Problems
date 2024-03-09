#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, w, r = 0, l = 0, minr = 5000000, t = 0; cin >> n >> w;
    int e[n];
    for(int i = 0; i < n; i++) cin >> e[i];
    t = e[0];
    while(l < n){
        while(t <= w && r < n - 1){
              r++;
              t += e[r];
        }
        if( t > w && r - l + 1 < minr) minr = r - l + 1;
        t -= e[l];
        l++;
    }
    if (minr == 5000000) minr = 0;
    cout << minr;
    return 0;
}
