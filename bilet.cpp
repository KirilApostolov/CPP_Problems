#include <bits/stdc++.h>
using namespace std;

int main () {
  do{
    int n, s1 = 0, p1 = 0, s2, p2 = 0, ngc = 0, ngcg = 0, ngcd = 0;
    cin >> n;
    if (n == 0) break;
    int nc[n];
    bool h1 = true, h2 = true;
    for(int i = 0; i < n; i++) {
        cin >> nc[i];
        if(ngc < nc[i]) {
            ngc = nc[i];
        }
    }
    p1 = 2 * (n + ngc + 1);
    for(int i = 0; i < n; i++) {
        s1 += nc[i] + 1;
        for(int h = i; h < n; h++) {
            if(nc[h] > nc[i]) {
                h1 = false;
                ngcg = max(nc[h], ngcg);
            }
        }
        for(int y = i; y >= 0; y--) {
            if(nc[y] > nc[i]) {
                h2 = false;
                ngcd = max(nc[y], ngcd);
            }
        }
        if(i != 0 && i < n - 1 && h1 == false && h2 == false) {
            p1 += (min(ngcg, ngcd) - nc[i]) * 2;
        }
    }
    s2 = n * 10 - s1;
    cout << s1 << " " << p1 <<"\n";
    cout << s2 << " 0";
    cout << "\n" << "\n";
  }while(true);
  return 0;
}

