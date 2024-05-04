#include <iostream>
using namespace std;

const int MaxA = 30001;
int b[MaxA], f[MaxA], l[MaxA];

int main(){
    int n, p, j, c, q; cin >> n;
    int fut[n];
    for(int i = 0; i < n; i++) cin >> fut[i];
    cin >> p;
    for(int i = 0; i < p; i++) {
        cin >> j;
        for(int y = 0; y < j; y++) {
            cin >> c;
            if (l[c] != i + 1) b[c]++;
            if (f[c] == 0) f[c] = i + 1;
            l[c] = i + 1;
        }
    }
    cin >> q;
    for(int i = 0; i < q; i++) {
        cin >> c;
        if (b[fut[c-1]] == 0) cout << "0 0 0" << "\n";
        else cout << b[fut[c-1]] << " " << f[fut[c-1]] << " " << l[fut[c-1]] << "\n";
    }
    return 0;
}
