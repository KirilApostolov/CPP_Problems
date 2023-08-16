#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int l = 1, n = 0;
    for (int i = 0; i < 64; i++){
        unsigned long long pO = pow(2,i);
        string ss = to_string(pO);
        if (l != ss.length()){
            cout << " <<< " << l << " --- n = " << n << endl;
            l = ss.length();
            n = 0;
        }
        cout << ss << " ";
        n++;
    }

}
