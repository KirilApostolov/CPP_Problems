#include <bits/stdc++.h>
using namespace std;

bool isPal(int c){
    int h = c, n = 0;
    while (h > 0){
        n = n * 10 + h % 10;
        h /= 10;
    }
    if(c == n) return true;
    else return false;
}

int main () {
    int n, minP = 0, h, c1, c2;
    cin >> n;
    for(int i1 = 1; i1 < n; i1++)
        for(int i2 = 1; i2 < n; i2++){
            h = i1 * i2;
            if (h > minP && isPal(h)) {
                minP = h;
                c1 = i1;
                c2 = i2;
            }
    }
    cout << min(c1, c2) << " " << max(c1,c2) << endl << minP;
    return 0;
}
