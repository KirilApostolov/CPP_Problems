#include<iostream>
using namespace std;

const int MaxN = 300001;
const int MaxC = 5;
int cc[MaxN][MaxC];

int main(){
    int b, h, c, n, q, s, e; cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> b >> h >> c;
        for (int j = 0; j < MaxC; j++) cc[i][j] = cc[i-1][j];
        cc[i][c-1] += b * h;
    }
    cin >> q;
    for (int i = 0; i < q; i++){
        cin >> s >> e >> c;
        cout << cc[e][c-1] - cc[s][c-1] << "\n";
    }
	return 0;
}
