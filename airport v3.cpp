#include <bits/stdc++.h>
using namespace std;

const int maxC = 3001;
const int maxT = 30001;

int d[maxT][maxC];

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, a, b, c, m = 0; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a >> b >> c;
        for(int j = a; j <= b; j++) d[j][c]++;
    }
    for(int i = 0; i < maxT; i++)
        for(int j = 0; j < maxC; j++) m = max(m, d[i][j]);
    cout << m;
    return 0;
}

