#include <iostream>
using namespace std;

int main () {
    int a, b, n, t, ab = 0, B = 0, A = 0, ans;
    cin >> a >> b >> n;
    for(int i = 0; i < n; i++){
        cin >> t;
        if (t > b) ab++;
        else if (t > a) B++;
        else A++;
    }
    ans = ab + B;
    A -= B;
    if (A > 0) ans = ans + A / 2 + A % 2;
    cout << ans;
    return 0;
}
