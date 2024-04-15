#include <bits/stdc++.h>
using namespace std;

long long foo(long long n){
    long long s = 0;
    while (n > 0){
        s += (n % 10) * (n % 10);
        n /= 10;
    }
    return s;
}

int main() {
    long long s = 0, br = 0;
    string st; cin >> st;
    for(int i = 0; i < st.size(); i++) s += (st[i] - '0') * (st[i] - '0');
    while (s != 1) {
        br++;
        s = foo(s);
        if ( br == 1000000){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}
