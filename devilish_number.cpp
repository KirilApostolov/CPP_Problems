#include <bits/stdc++.h>
using namespace std;

int d[10];

int main () {
    int n, k = 1, md = 0, mdInd = 0; cin >> n;
    char c, p = ' ';
    while(cin >> c){
        if ( c != p) k = 1;
        else k++;
        if (k >= n) d[c - '0']++;
        p = c;
    }
    if (n == 1){
        for(int i = 0; i < 10; i++)
            if(md <= d[i]){
                md = d[i];
                mdInd = i;
            }
        cout << mdInd << " " << md;
        return 0;
    }
    for(int i = 1; i < 10; i++)
        if(md <= d[i]){
            md = d[i];
            mdInd = i;
        }
    if (md == 0) cout << "NOT FOUND";
    else {
        for(int i = 0; i < n; i++) cout << mdInd;
        cout << " " << md;
    }
    return 0;
}
