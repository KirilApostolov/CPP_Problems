#include <bits/stdc++.h>
using namespace std;

int main (){
    vector<int> del;
    int n, gcd = 0, i; cin >> n;
    int sn[n];
    for(i = 0; i < n; i++) cin >> sn[i];
    for(i = 1; i < n; i++) {
        cout << abs(sn[i]-sn[i-1]) << " ";
        gcd = __gcd(gcd, abs(sn[i]-sn[i-1]));
    }
    for(i = 2; i * i < gcd; i++)
        if(gcd % i == 0){
            del.push_back(i);
            del.push_back(gcd / i);
        }
    if (i * i == gcd) del.push_back(i);
    del.push_back(gcd);
    sort(del.begin(), del.end());
    cout << "\n";
    for(i = 0; i < del.size(); i++) cout << del[i] << " "; cout << gcd;
    return 0;
}
