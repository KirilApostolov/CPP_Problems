#include <bits/stdc++.h>
using namespace std;

int main () {
    long long n, m, c, d = 0, code; cin >> n >> m;
    for(int i = 0; i < m; i++) d = 10 * d + 9;
    string st, result = "";
    for(long long i = 0; i < n; i++){
        cin >> st >> c;
        code = c % d;
        long long o = 0;
        string res = "";
        while(code > 0){
            if((code % 10) % 2 == 1) res = st[m - 1 - o] + res;
            o++;
            code /= 10;
        }
        result = result + res;
    }
    cout << result;
    return 0;
}
