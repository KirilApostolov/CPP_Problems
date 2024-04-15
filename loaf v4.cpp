#include <bits/stdc++.h>
using namespace std;

int main () {
    int L, n, maxL = 0, maxDL = 0, maxLN = 0, maxDLN = 0; cin >> L >> n;
    int red[n], b[n], e[n];
    for(int i = 0; i < n; i++ ) {
        cin >> red[i] >> b[i] >> e[i];
        if(maxL < e[i] - b[i] + 1){
            maxL = e[i] - b[i] + 1;
            maxLN = i + 1;
        }
    }
    for(int i = 0; i < n; i++ ) {
        int z = 0, B = b[i], E = e[i];
        for(int v = 0; v < n; v++){
            if(v == i || red[i] < red[v] || B > e[v] || E < b[v] ) continue;
            if(B == e[v]) B = e[v] + 1;
            else if(B >= b[v] && B <= e[v] && E > e[v]) B = e[v] + 1;
            else {
                z += b[v] - B;
                B = e[v] + 1;
            }
        }
        if(E >= B) z += E - B + 1;
        if(maxDL < z){
            maxDL = z;
            maxDLN = i + 1;
        }
    }
    cout << maxLN << "\n" << maxDLN;
    return 0;
}

