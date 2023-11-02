#include <bits/stdc++.h>
using namespace std;

int p[101], h[101], data[101][101][2];

int solve(bool ch, int n, int s){
    if (n==0) return 0;
    if (s==0 && ch) return 0;
    if (data[n][s][ch] != 0) return data[n][s][ch];
    int H, S, ot = 1;
    if(ch) {
      H = p[n];
    } else {
      H = h[n];
    }
    if(ch) {
      S = s-1;
    } else {
      S = s;
    }
    for (int i = 1; i < n; i++ ){
        if(h[i] <= H) ot = max(ot, 1 + solve(false, i, S));
        if(p[i] <= H) ot = max(ot, 1 + solve(true,i, S));
    }
    data[n][s][ch] = ot;
    return ot;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, s;
    cin >> n >> s;
    for(int i = 1; i <= n; i++){
        cin >> h[i] >> p[i];
    }
    int ot = 0;
    for(int i = 1; i <= n; i++){
         ot = max(ot, solve(true,i, s));
         ot = max(ot, solve(false, i, s));
    }
    cout << ot;
    return 0;
}
