#include <bits/stdc++.h>
using namespace std;

int main () {
    long long a, n, maxD, ta, maxDC = 1, tDC = 1;
    cin >> n;
    cin >> ta;
    maxD = ta;
    for (int i = 1; i < n; i++){
        cin >> a;
        if (a == ta) tDC++;
        else {
            if (maxDC < tDC){
                maxDC = tDC;
                maxD = ta;
            }
            ta = a;
            tDC = 1;
        }
    }
    if (maxDC < tDC){
        maxDC = tDC;
        maxD = ta;
    }
    if (maxDC == 1) cout << "no";
    else cout << maxD;
    return 0;
}
