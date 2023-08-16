#include <bits/stdc++.h>
#define endl '\n';
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,m,k;
    cin >> n >> m >> k;
    int x = 1, i = 0, y = 1;
    char mat[n+1][m+1];
    for(int j1 = 1; j1 <= n; j1++){
        for(int j2 = 1; j2 <= m; j2++){
            mat[j1][j2] = '.';
        }
    }
    bool f = true;
    while(x <= m){
        mat[y][x] = i + '0';
        i++;
        if(i == k) i = 0;
        if(f){
            y++;
        }else{
            y--;
        }
        if(y > n){
            f = false;
            y = n;
            x++;
            mat[y][x] = i + '0';
            i++;
            if(i == k) i = 0;
            x++;
        }
        if(y == 0){
            f = true;
            y = 1;
            x++;
            mat[y][x] = i + '0';
            i++;
            if(i == k) i = 0;
            x++;
        }
    }
    for(int j1 = 1; j1 <= n; j1++){
        for(int j2 = 1; j2 <= m; j2++){
            cout << mat[j1][j2];
        }
        cout << endl;
    }

    return 0;
}
