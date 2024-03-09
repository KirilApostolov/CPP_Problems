#include <bits/stdc++.h>
using namespace std;

int main () {
    int c, c1 = 0, c2 = 0, e1 = 0, e2 = 0, mr = 0, bg = 1, bgOk = 1, n; cin >> n;
    for(int i = 1; i <= n; i++) {
        cin >> c;
        if (c == c1) e1 = i;
        else if (c == c2) e2 = i;
        else {
            if (e1 > e2){
                bg = e2 + 1;
                e2 = i;
                c2 = c;
            } else {
                bg = e1 + 1;
                e1 = i;
                c1 = c;
            }
        }
        if (mr < i - bg + 1){
            mr = i - bg + 1;
            bgOk = bg;
        }
//        cout << "i = " << i << " c = " << c << " c1 = " << c1 << " e1 = " << e1 << " c2 = " << c2 << " e2 = " << e2 << " bg = " << bg << " mr = " << mr << " bgOK = " << bgOk << "\n";
    }
    if (mr < n - bg + 1){
        mr = n - bg + 1;
        bgOk = bg;
    }
    cout << bgOk << " " << mr;
    return 0;
}
