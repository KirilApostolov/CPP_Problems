#include <bits/stdc++.h>
using namespace std;

bool isUnique(int n) {
    if (n == 0) return true;
    bool d[10] = {false};
    while (n > 0){
        if(d[n%10]) return false;
        else d[n%10] = true;
        n /=10;
    }
    return true;
}

int main(){
    int m, n, br = 0; cin >> m >> n;
    for (int i = m; i <= n; i++) if(isUnique(i)) br++;
    cout << br;
}
