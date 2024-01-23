#include<bits/stdc++.h>
using namespace std;

int minC(int c){
    int d, s = 0, T = 1;
    while (c > 0){
        d = c % 10;
        if (d == 6) d = 5;
        s = d * T + s;
        T *= 10;
        c /= 10;
    }
    return s;
}
int maxC(int c){
    int d, s = 0, T = 1;
    while (c > 0){
        d = c % 10;
        if (d == 5) d = 6;
        s = d * T + s;
        T *= 10;
        c /= 10;
    }
    return s;
}

int main(){
    int a, b, minA, minB, maxA, maxB; cin >> a >> b;
    cout << minC(a) + minC(b) << " " << maxC(a) + maxC(b);
    return 0;
}
