#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, c, mc = 0; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> c;
        mc = max(mc, c);
    }
    cout << mc * 2 + 1;
}
