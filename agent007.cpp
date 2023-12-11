#include <bits/stdc++.h>
using namespace std;

int main () {
    int l, n, a, level = 0, tr = 0, levelI = 1, ok = true;
    cin >> l >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        if (a >= level){
            if(tr >= l){
                cout << levelI << endl;
                ok = false;
            }
            if(a != level) levelI = i + 1;
            level = a;
            tr = 0;
        } else {
            tr++;
        }
    }
    if(tr >= l){
       cout << levelI << endl;
       ok = false;
    }
    if(ok) cout << "NO";
    return 0;
}
