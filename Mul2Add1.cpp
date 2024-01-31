#include <bits/stdc++.h>
using namespace std;

int main () {
    int n; cin >> n;
    vector<int> opp;
    while(n != 0)
        if (n % 2 != 0){
            opp.push_back(2);
            n--;
            n /= 2;
        } else {
            opp.push_back(1);
            n /= 2;
        }
    cout << opp.size() << "\n";
    for(int i = opp.size() - 1; i >=0; i--) cout << opp[i] << " ";

    return 0;
}
