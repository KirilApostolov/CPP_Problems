#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, d = 0, tr = 0; cin >> n; n--;
    int r[n];
    for(int i = 0; i < n; i++){
        cin >> r[i];
        d = __gcd(d, r[i]);
    }
    for(int i = 0; i < n; i++) tr += r[i] / d - 1;
    cout << tr;
	return 0;
}
