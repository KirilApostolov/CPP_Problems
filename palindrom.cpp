#include <bits/stdc++.h>
using namespace std;

int d[10];

int main(){
    char c;
    long long n, nc = 0, s = 0; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> c;
        d[c - '0']++;
        s += c - '0';
    }
    for(int i = 0; i < 10; i++) if (d[i] % 2 == 1) nc++;
    if (n == 3 && d[0] == 2) cout << "no";
    else if (nc > 1) cout << "no";
    else cout << "yes " << s;
    return 0;
}
