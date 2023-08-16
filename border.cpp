#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int n, m = 1000000001, k;
    cin >> n;
    int x[n];
    for(int i = 0; i < n; i++) cin >> x[i];

    for(int i1 = 0; i1 < n - 1; i1++){
        for(int i2 = i1 + 1; i2 < n; i2++){
            k = abs(x[i1]-x[i2]);
            if(k < m) m = k;
        }
    }

    for(int i = 2; i <= m/2; i++) if(m % i == 0) cout << i << " ";

    cout << m;

    return 0;
}
