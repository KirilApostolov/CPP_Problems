#include <iostream>
using namespace std;

int main(){
    int n, b, e, nation, maxM = 0, maxN = 0;
    int mapp[30001][15] = {0};
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> b >> e >> nation;
        if(e > maxM) maxM = e;
        if(nation > maxN) maxN = nation;
        for (int i1 = b; i1 <= e; i1++) mapp[i1][nation]++;
    }
    int m = 0;
    for (int i1 = 1; i1 <= maxN; i1++){
       cout << i1 << " - ";
        for (int i2 = 1; i2 <= maxM; i2 ++) {
            cout << mapp[i2][i1] << " ";
            if (mapp[i2][i1] > m) m = mapp[i2][i1];
        }
        cout << endl;
    }
    cout << m;
    return 0;
}
