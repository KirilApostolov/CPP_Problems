#include <bits/stdc++.h>
using namespace std;

const int maxL = 100000001;
bool l[maxL];


int main() {
    int p, n, rr, maxP = 1, maxRP = 0, maxRPN = 0; cin >> p >> n;
    int l[n], r[n];
    for (int i = 1; i <= n; i++) {
        cin >> rr >> l[i] >> r[i];
        if (r[i]-l[i] > r[maxP]-l[maxP]) maxP = i;
    }
    for (int i = 1; i <= n; i++) {
        int tek = 0;
        for (int j = l[i]; j <= r[i]; j++) {
            if (!l[j]) tek++;
            l[j] = true;
        }
        if (tek > maxRPN) {
            maxRP = i;
            maxRPN = tek;
        }
    }
    cout << maxP << "\n" << maxRP;
    return 0;
}
