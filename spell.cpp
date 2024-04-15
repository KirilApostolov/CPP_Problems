#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    for(int i = 0; i < n / 2; i++) cout << char(64 + n/2 + i + 1) << char(64 + n/2 - i);
    if(n % 2 != 0) cout << char(64 + n);
    return 0;
}
