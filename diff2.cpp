#include <bits/stdc++.h>
using namespace std;

int findN(long long n, long long a){
    int Dx = 1, Dd = 1;
    long long N = n;
    while (N > 9){Dx++; N /= 10; Dd *= 10;}
    cout << Dd << " " << Dx << endl;
    long long k = a, Cr = a - Dd;
    while (Dx >= 1) {
        if (k <= Cr * Dx) {
            int x = k /
        }
    }
}

int main(){
    long long n, a, b;
    cin >> n >> a >> b;
    cout << findN(n,a) - findN(n,b);
    return 0;
}
