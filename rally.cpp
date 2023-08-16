#include <bits/stdc++.h>
#define endl '\n';
const int maxEtap = 1000;
int countEtap[maxEtap+1];
bool print[maxEtap+1];
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, a;
    cin >> n;
    vector <int> etap(n);
    for(int i = 0; i < n; i++) {
        cin >> a;
        etap[i] = a;
        countEtap[a]++;
    }
    cout << etap[0];
    print[etap[0]] = true;
    for(int i = 1; i < n; i++) {
       if (countEtap[etap[i]] <= 2 || !print[etap[i]]) cout << " " << etap[i];
       print[etap[i]] = true;
    }

    return 0;
}
