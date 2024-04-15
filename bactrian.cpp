#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, st = 0, l = 0, c, p, q, m; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> c;
        if(l == c){
            cout << 0;
            return 0;
        }
        if(st == 0){
           if (c < l) {
              p = i - 1;
              st = 1;
           }
        } else if (st == 1) {
            if (c > l){
                q = i - 1;
                st = 2;
            }
        } else if (st == 2){
            if (c < l){
                m = i - 1;
                st = 3;
            }
        } else {
            if ( c > l){
              cout << 0;
              return 0;
            }
        }
        l = c;
    }
    if (st != 3){
        cout << 0;
        return 0;
    }
    cout << p << " " << q << " " << m;
    return 0;
}
