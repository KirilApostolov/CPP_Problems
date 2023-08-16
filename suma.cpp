#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int Q;
    cin >> Q;
    long long S, F, cnt;
    for (int i = 0; i < Q; i++){
        cin >> S >> F;
        int oS = S % 9, oF = F % 9, oo = 0;
        if (oS == 0) oS = 9;
        if (oF == 0) oF = 9;
        if (oF >= oS ) for (int y = oS; y <= oF; y++) oo += y;
        else {
           for (int y = oS; y <= 9; y++) oo += y;
           for (int y = 1; y <= oF; y++) oo += y;
        }
        cnt = (F-S)/9 * 45 + oo;
        cout << cnt << endl;
    }

    return 0;
}
