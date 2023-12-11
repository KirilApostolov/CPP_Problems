#include <bits/stdc++.h>
using namespace std;
int main () {
    int t = 0, N; cin >> N;
    for (int i1 = 1; i1 <= N; i1++)
        for (int i2 = i1; i2 <= N; i2++)
            for (int i3 = i2; i3 <= N; i3++)
                if ( N == i1 * i2 * i3) t++;
    cout << t;
    return 0;
}
