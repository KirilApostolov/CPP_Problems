#include <bits/stdc++.h>
using namespace std;
int m[100][100];
int n, M;

void go (int y, int x, int v){
    v += m[y][x];
    if (v > M) M = v;
    if (y > 0) go(y-1,x,v);
    if (x < n-1) go(y,x+1,v);
    return;
}

int main() {
    cin >> n;
    string s;
    for (int i1 = 0; i1 < n; i1++)
        for (int i2 = 0; i2 < n; i2++){
            cin >> s;
            if (s[0] == 'A') m[i1][i2] = 1;
            if (s[0] == 'T') m[i1][i2] = 10;
            if (s[0] == 'J') m[i1][i2] = 11;
            if (s[0] == 'Q') m[i1][i2] = 12;
            if (s[0] == 'K') m[i1][i2] = 13;
            if (isdigit(s[0])) m[i1][i2] = s[0] - '0';
        }
    go(n-1, 0, 0);
    cout << M;
    return 0;
}
