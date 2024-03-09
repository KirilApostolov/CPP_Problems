#include <iostream>
using namespace std;

int main () {
    int n, m, p = 0, nmp, ind = 0; cin >> n >> m;
    int t[n];
    for(int i = 0; i < n; i++) cin >> t[i];
    for(int i = 0; i < m; i++) p +=t[i];
    nmp = p;
    for (int i = 1; i < n - m + 1; i++){
        p = p - t[i - 1] + t[i + m - 1];
        if (p <= nmp){
            nmp = p;
            ind = i;
        }
    }
    cout << ind;
    return 0;
}
