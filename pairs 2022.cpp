#include <bits/stdc++.h>
using namespace std;

const int maxP = 50000;
int p[50000];

int main () {
    int n, m = 0, s; cin >> n;
    int c[n];
    for(int i = 0; i < n; i++){
        cin >> c[i];
        for(int j = 0; j < i; j++) p[c[i] + c[j]]++;
    }
    for(int i = 0; i < maxP; i++)
        if(p[i] > m){
            m = p[i];
            s = i;
        }
    cout << s;
    return 0;
}
