#include <bits/stdc++.h>
using namespace std;

int main () {
    long long n, br = 0, l = 0, r = 0; cin >> n;
    int d[n];
    for(int i = 0; i < n; i++) cin >> d[i];
    while(r < n - 1){
        r++;
        if(d[r - 1] < d[r] && d[r] > d[r + 1]){
           br += (r - l) * (r - l + 1) / 2;
           l = r;
        }
        if(d[r - 1] > d[r] && d[r] < d[r + 1]){
           br += (r - l) * (r - l + 1) / 2;
           l = r;
        }
    }
    br += (r - l) * (r - l + 1) / 2;
    cout << br * 2;
    return 0;
}
