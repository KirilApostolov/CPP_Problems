#include <bits/stdc++.h>
using namespace std;

double triv(int n){
    int s = 1, i;
    for(i = 2; i * i < n; i++)
    if(n % i == 0){
        s += i;
        s += n / i;
    }
    if (i * i == n) s += i;
    return 1.0 * s / n;
}

int main () {
    int l, r, minTN, maxTN ; cin >> l >> r;
    double minT = 10000000, maxT = 0;
    for(int i = l; i <= r; i++){
        double tek = triv(i);
        if (minT > tek){
            minT = tek;
            minTN = i;
        }
        if (maxT < tek){
            maxT = tek;
            maxTN = i;
        }
    }
    cout << minTN << " " << maxTN;
    return 0;
}

