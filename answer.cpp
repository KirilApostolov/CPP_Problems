#include <bits/stdc++.h>
using namespace std;

int main () {
    int a, b; cin >> a >> b;
    int a1 = a /100, a2 = a / 10 % 10, a3 = a % 10, b1 = b /100, b2 = b / 10 % 10, b3 = b % 10;
    int r3 = a3, r2 = max(a2, b2), r1 = 0;
    if(r3 <= 2 && r3 + 2 >= 7) r1 = 2;
    else if(r3 <= 4 && r3 + 4 >= 7) r1 = 4;
    else if(r3 <= 6 && r3 + 6 >= 7) r1 = 6;
    else if(r3 <= 8 && r3 + 9 >= 7) r1 = 8;
    if (r1 == 0) cout << "0 0 0";
    else cout << r1 << " " << r2 << " " << r3;

    return 0;
}

