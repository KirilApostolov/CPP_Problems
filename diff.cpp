#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, a, b;
    cin >> n >> a >> b;
    string s = "";
    for(long long i = n; i >= 1; i--) s += to_string(i);
    for(long long i = 2; i <= n; i++) s += to_string(i);
    cout << (s[a-1] - '0') - (s[b-1] - '0');
    return 0;
}
