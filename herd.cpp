#include <bits/stdc++.h>
using namespace std;
int M[200][200];
int L[200][200];
int n, m, lale = 1;

void go(int col, int row){
    if(row < 0 || col < 0 || row >= m || col >= n || M[col][row] != 0 || L[col][row] != 0) return;
    L[col][row] = lale;
    M[col][row] = 1;
    lale++;
    go(col,row-1);
    go(col-1,row);
    go(col,row+1);
    go(col+1,row);
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int maxLale = 0, numberOfMax = 0;
    cin >> n >> m;
    for(int col = 0; col < n; col++) for(int row = 0; row < m; row++) cin >> M[col][row];
    for(int col = 0; col < n; col++) for(int row = 0; row < m; row++)
        if (M[col][row] == 0){
            go(col,row);
            lale = 1;
        }
    for(int col = 0; col < n; col++) for(int row = 0; row < m; row++){
        if (maxLale < L[col][row]) {
            maxLale = L[col][row];
            numberOfMax = 0;
        }
        if (maxLale == L[col][row]) numberOfMax++;
    }
    cout << maxLale << " " << numberOfMax;
    return 0;
}
