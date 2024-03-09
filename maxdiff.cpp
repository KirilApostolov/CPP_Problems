#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, br, mbr = 0; cin >> n;
    char d[n];
    for(int i = 0; i < n; i++) cin >> d[i];
    for(int i = 0; i < n; i++){
        br = 0;
        for (int j = i; j < n; j++){
            if(d[i] == d[j]) br++;
            else br--;
            mbr = max(mbr, br);
        }
    }
    cout << mbr;
    return 0;
}
