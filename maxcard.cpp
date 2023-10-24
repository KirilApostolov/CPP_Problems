#include <bits/stdc++.h>
using namespace std;

int main() {
    string carts[4];
    for(int i = 0; i < 4; i++) cin >> carts[i];

    string s = carts[0] + carts[1] + carts[2] + carts[3];
    for(int i1 = 0; i1 < 4; i1++){
        for(int i2 = 0; i2 < 4; i2++){
            if(i1 == i2) continue;
            for(int i3 = 0; i3 < 4; i3++){
                if(i1 == i3) continue;
                if(i2 == i3) continue;
                for(int i4 = 0; i4 < 4; i4++){
                    if(i1 == i4) continue;
                    if(i2 == i4) continue;
                    if(i3 == i4) continue;
                    if(s < carts[i1] + carts[i2] + carts[i3] + carts[i4]){
                        s = carts[i1] + carts[i2] + carts[i3] + carts[i4];
                    }
                }
            }
        }
    }
    cout << s;

    return 0;
}
