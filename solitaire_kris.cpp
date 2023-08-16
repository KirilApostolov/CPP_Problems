#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
int ma, n;
int m[100][100];
void rek(int x, int y, int s){
    s+=m[x][y];
    if(s > ma){
        ma = s;
    }
    if(x > 0){
        rek(x-1,y,s);
    }
    if(y < n-1){
        rek(x,y+1,s);
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    string st;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> st;
            char c = st[0];
            if(isdigit(c)){
                m[i][j] = c - '0';
                continue;
            }
            if(c == 'A'){
                m[i][j] = 1;
                continue;
            }
            if(c == 'T'){
                m[i][j] = 10;
                continue;
            }
            if(c == 'J'){
                m[i][j] = 11;
                continue;
            }
            if(c == 'Q'){
                m[i][j] = 12;
                continue;
            }
            if(c == 'K'){
                m[i][j] = 13;
                continue;
            }
        }
    }
    rek(n-1,0,0);
    cout << ma;

    return 0;
}
