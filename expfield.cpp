#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    cout << __gcd(m-1,n-1) + 1;
    return 0;
}
