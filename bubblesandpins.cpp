#include <bits/stdc++.h>
using namespace std;

int main () {
    char a, o = 'O';
    int br = 0, m = 0, bbb = 0;
    while(cin >> a){
        if(a == 'T'){
            br++;
            if(o == 'O'){
                m -= bbb;
                br -= bbb;
            }
            o = a;
        }
        if(a == 'L') {
            br++;
            o = a;
        }
        if(a == 'O' && o == 'O') bbb++;
        if(a == 'O' && o != 'O') bbb = 1;
        if(a == 'O' && o != 'L'){
            br++;
            m++;
            o = a;
        }
///        cout << a << " " << o << " " << br << " " << m << "\n";
    }
    cout << br << " " << m;
    return 0;
}

