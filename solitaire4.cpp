#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int m[n][n];
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
    int x = n-1, y = 0;
    int v = m[y][x];
    for (int i = 0;i < 2 * n-2; i++){
        int d = 0, l = 0;
        if (y+1 < n) d = m[y+1][x];
        if (x > 0) l = m[y][x-1];
        if (d > l){
            v += d;
            y++;
        } else {
            v += l;
            x--;
        }
    }
    cout << v;
    return 0;
}
