#include <bits/stdc++.h>
using namespace std;
int M[200][200];
const int startV = 2;
int n, m, lale = startV;

static void print(){
    for (int i1 = 0; i1 < n; i1++){
        for (int i2 = 0; i2 < m; i2++) cout << M[i1][i2] << " ";
        cout << endl;
    }
}

void go (int col, int row){
    if(row < 0 || col < 0 || row >= m || col >= n || M[col][row] != 0 ) return;
    M[col][row] = lale;
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
    for (int col = 0; col < n; col++) for (int row = 0; row < m; row++) cin >> M[col][row];
    for (int col = 0; col < n; col++) for (int row = 0; row < m; row++)
        if (M[col][row] == 0){
            go(col,row);
            cout << endl << lale << " " << maxLale - startV << " " << numberOfMax << endl;
            print();
            if(lale > maxLale){
                maxLale = lale;
                numberOfMax = 1;
            } else if(lale == maxLale) numberOfMax++;
            lale = startV;
        }
    cout << maxLale - startV << " " << numberOfMax;
    return 0;
}
