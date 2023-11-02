#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a[5], k, R;
    for(int i = 0; i < 5; i++) cin >> a[i];
    sort(a, a+5);

    cin >> k;

    R = a[4] - a[3];
    if(k < R) R = k;
    a[4] -= R;
    k -= R;
    if ( k == 0){
        cout << a[4];
        return 0;
    }

    R = (a[4] - a[2]) * 2;
    if(k < R) R = k;
    a[4] -= R/2;
    a[3] -= R/2;
    k -= R;
    if ( k == 0){
        cout << a[4];
        return 0;
    }

    R = (a[4] - a[1]) * 3;
    if(k < R) R = k;
    a[4] -= R/3;
    a[3] -= R/3;
    a[2] -= R/3;
    k -= R;
    if ( k == 0){
        cout << a[4];
        return 0;
    }

    R = (a[4] - a[0]) * 4;
    if(k < R) R = k;
    a[4] -= R/4;
    a[3] -= R/4;
    a[2] -= R/4;
    a[1] -= R/4;
    k -= R;
    if ( k == 0){
        cout << a[4];
        return 0;
    }

    R = a[4] * 5;
    if(k < R) R = k;
    a[4] -= R/5;
    a[3] -= R/5;
    a[2] -= R/5;
    a[1] -= R/5;
    a[0] -= R/5;
    k -= R;
    cout << a[4];
    return 0;
}
