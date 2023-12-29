#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, a, b, maxR = 0, OldA = 1000000, OldB = 1000000, h = 0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a >> b;
        if(a < b) swap(a, b);
        if(a <= OldA && b <= OldB) h++;
        else {
           maxR = max(h, maxR);
           h = 1;
        }
        OldA = a;
        OldB = b;
    }
    maxR = max(h, maxR);
    cout << maxR;
    return 0;
}
