#include <iostream>
using namespace std;

int main () {
    int n, br = 0, pr = 0, a, ndr = 0, tr = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        if (pr + 1 != a && pr != 0) {
            br++;
            ndr = max(ndr, tr);
            tr = 1;
        } else tr ++;
        pr = a;
    }
    ndr = max(ndr, tr);
    cout << br << " " << ndr;
    return 0;
}
