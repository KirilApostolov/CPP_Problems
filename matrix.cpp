#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m, Dx = pow(10,9)+7;
    long long input, result = 0;
    cin >> n >> m;
    for(int i1 = 0; i1 < n; i1++)
        for(int i2 = 0; i2 < m; i2++){
            cin >> input;
            result += (input * ((i2+1) * (m-i2))% Dx * ((i1+1) * (n-i1)) % Dx) % Dx;
        }
    cout << result % Dx;
    return 0;
}
