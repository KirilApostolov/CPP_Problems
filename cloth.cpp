#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, a, b, c, k, pl, pc, pw, Okc = INT_MAX, Okl; cin >> m >> a >> b >> c >> k;
    string pName, OkName ;
    for (int i = 0; i < k; i++){
        cin >> pName >> pw >> pc >> pl;
        if(pw == a && pl >= m / 2 * (b + c) && Okc > m / 2 * (b + c) * pc){
            OkName = pName;
            Okl = m / 2 * (b + c);
            Okc = Okl * pc;
        } else if (pw == (b + c) && pl >= m / 2 * a && Okc > m / 2 * a * pc) {
            OkName = pName;
            Okl = m / 2 * a;
            Okc = Okl * pc;
        }
    }
    if(Okc == INT_MAX) cout << "IMPOSSIBLE";
    else{
        cout << OkName << "\n";
        if (Okc / 100 > 0 ) cout << Okc / 100 << " lv ";
        if (Okc % 100 > 0 ) cout << Okc % 100 << " st";
        cout << "\n";
        if (Okl / 100 > 0 ) cout << Okl / 100 << " m ";
        if (Okl % 100 > 0 ) cout << Okl % 100 << " sm";
    }

    return 0;
}
