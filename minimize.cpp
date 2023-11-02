#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[5], k, R;
    for(int i = 0; i < 5; i++) cin >> a[i];
    sort(a, a+5);

    cin >> k;

    R = min(1*(a[4] - a[3]), k);
    a[4] -= R;
    k -= R;

    R = min(2*(a[4] - a[2]), k);
    a[4] -= R/2;
    a[3] -= R/2;
    k -= R;

    R = min(3*(a[4] - a[1]), k);
    a[4] -= R/3;
    a[3] -= R/3;
    a[2] -= R/3;
    k -= R;

    R = min(4*(a[4] - a[0]), k);
    a[4] -= R/4;
    a[3] -= R/4;
    a[2] -= R/4;
    a[1] -= R/4;
    k -= R;

    R = min(5*a[4], k);
    a[4] -= R/5;
    k -= R;

    cout << a[4] << endl;
    return 0;
}
