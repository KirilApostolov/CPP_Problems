#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, que = 0, Mx = 0, MxC = 1, ta, ts; cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> ta >> ts;
        int w = max(0, que - ta);
        if (w > Mx){
            Mx = w;
            MxC = i;
        }
        que = ta + w + ts;
    }
    cout << MxC << " " << Mx;
    return 0;
}
