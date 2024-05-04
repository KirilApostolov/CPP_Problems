#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, m[3], d;
    cin >> n >> m[0] >> m[1] >> m[2] >> d;
    sort(m, m + 3);
    cout << max(1LL * 0, (m[0] - 1) - d) + max(1LL * 0, m[1] - m[0] - 1 - 2 * d) +
            max(1LL * 0, m[2] - m[1] - 1 - 2 * d) + max(1LL * 0, n - m[2] - d);
    return 0;
}
