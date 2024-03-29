#include <bits/stdc++.h>
using namespace std;

int main(){
    long long c, p = 0, n, s = 0, maxS = 0; cin >> n;
    bool up = true;
    for(int i = 0; i < n; i++){
        cin >> c;
        if(c == p){
            maxS = max(s, maxS);
            s = c;
        } else if (!up && c > p){
            maxS = max(s, maxS);
            s = c + p;
        } else s += c;
        if(c > p) up = true;
        else up = false;
        p = c;
    }
    maxS = max(s, maxS);
    cout << maxS;
    return 0;
}
