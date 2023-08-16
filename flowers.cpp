#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long A, B, m;
    int L = 10000, n = 0;
    int d[L] = {0};
    cin >> A >> B;
    m = min(A,B);
    for (int i = 1; i <= sqrt(m); i++)
        if (A%i == 0) {
            if (i != sqrt(m)){
                d[n] = i;
                n++;
            }
            if(B%i == 0) cout << i << " " << A/i << " " << B/i << endl;
        }
    long long nD;
    for (int i = n; i>0; i--){
        nD = A/d[i-1];
        if (B%nD == 0)
            cout << nD << " " << A/nD << " " << B/nD << endl;
    }
    return 0;
}
