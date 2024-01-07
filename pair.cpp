#include <bits/stdc++.h>
using namespace std;

int main () {
    int t, n, t1;
    cin >> t;
    pair<int,int> p[t/2];
    for (int i = 0; i < t/2; i++) cin >> p[i].first >> p[i].second;
    cin >> n;
    char c;
    string st;
    t1 = 100 / t;
    for (int i = 0; i < n; i++){
        int R = 0;
        cin >> st;
        for (int y = 0; y < t/2; y++)
            if(st[p[y].first - 1] == '1' && st[p[y].second - 1] == '1') R += 2*t1;
        cout << R << '\n';
    }
    return 0;
}
