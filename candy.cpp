#include<bits/stdc++.h>
using namespace std;

const int maxM = 5001;
int h[maxM];

int main(){
    int n, m = -1; cin >> n;
    int p[n];
    for(int i = 0; i < n; i++) cin >> p[i];
    for(int i = n - 1; i >= 0; i--){
        int b = 0;
        for(int j = p[i]; j > 0; j--) b += h[j];
        h[p[i]]++;
        if(b == 0) continue;
        m = max(m, b + p[i]);
    }
    if (m == -1) m = n;
    cout << m;
    return 0;
}
