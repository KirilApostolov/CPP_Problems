#include<bits/stdc++.h>
using namespace std;

int d[40001];

int main(){
    int n, k, br = 0, ff; cin >> n >> k;
    for(int i = 1; i <= n; i++){
        double sq = sqrt(i);
        for(int j = 1; j < sq; j++)
            if ( i % j == 0) d[i] += 2;
        if(sq == trunc(sq)) d[i]++;
    }
    for(int i1 = 1; i1 < n; i1++){
        ff = k*d[i1];
        if (ff < i1) continue;
        for(int i2 = i1; i2 <= n; i2++)
            if(ff*d[i2] == i1 * i2) br++;
    }
    cout << br;
	return 0;
}
