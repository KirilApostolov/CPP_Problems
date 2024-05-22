#include <iostream>
using namespace std;

int main(){
    int n, c, r = 1, x = 0, y = 0, l = 0, cn = 1, maxcn = 0, rb, re; cin >> n;
    for (int i = 0; i < n; i++){
        cin >> c;
        if(c == 1) x++;
        if(c == 2) y++;
        if(x == y) r++;
        if(c == l) {
            re = x - y;
            cn++;
        } else {
            if(rb * re < 0) maxcn = max(maxcn, cn);
            rb = x - y;
            cn = 1;
        }
        l = c;
    }
    if(rb * re < 0) maxcn = max(maxcn, cn);
    cout << x << " " << y << "\n" << r << "\n" << maxcn;
    return 0;
}
