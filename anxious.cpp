#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, t = 0, ma = 0, ca = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int bh, bm, eh, em;
        cin >> bh >> bm >> eh >> em;
        int b = bh*60 + bm;
        int e = eh*60 + em;
        if (e > 720) ca++;
        if (e < b) {
            e += 12*60;
            ca++;
        } else if (e <= 720) {
            ma = max(ma, ca);
            ca = 0;
        }
        t += e - b;
    }
    ma = max(ma, ca);
    if (t/60 < 10) cout << '0';
    cout << t/60 << ':';
    if (t%60 < 10) cout << '0';
    cout << t%60 << endl;
    cout << ma;
    return 0;
}
