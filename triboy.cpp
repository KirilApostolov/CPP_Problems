#include <bits/stdc++.h>
using namespace std;

const int maxN = 10000000;

int main () {
    int a, b, c, x, y, z, n; cin >> x >> y >> z >> n;
    pair<int, int> t[n];
    for(int i = 1; i <= n; i++){
        cin >> a >> b >> c;
        t[i-1].first = x * a + y * b + z * c;
        t[i-1].second = maxN - i;
    }
    sort(t, t + n);
    cout << t[n-1].first + t[n-2].first + t[n-3].first << "\n";
    cout << maxN - t[n-1].second << " " <<maxN - t[n-2].second << " " << maxN -  t[n-3].second;
    return 0;
}

