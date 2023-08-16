#include <bits/stdc++.h>
using namespace std;
int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, k, m = 0, r = 0;
    bool f = true;
    cin >> n >> k;
    vector<int> inp(n);
    for (int i = 0; i < n; i++) cin >> inp[i];
    if (inp[0] != 0) f = false;
    else r++;
    for (int i = 1; i < n; i++) {
        if (r == 0 && inp[i] != 0) f = false;
        else if (r == 0 && inp[i] == 0) r++;
        else if (inp[i] != inp[i-1]+1) {
                m = max(m,r);
                if (inp[i] != 0) {
                   f = false;
                   r = 0;
                }
                else r = 1;
        }
        else r++;
    }
    m = max(m,r);
    if (m > k) f = false;
    if (f) cout << "Yes ";
    else cout << "No ";
    cout << m;
    return 0;
}
