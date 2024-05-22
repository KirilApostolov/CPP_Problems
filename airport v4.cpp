#include <iostream>
using namespace std;
int main(){
    int n, m = 0; cin >> n;
    int a[n], b[n], c[n];
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i] >> c[i];
    for(int i1 = 1; i1 < 3001; i1++) {
        int mapp[30001] = {0};
        for(int i2 = 0; i2 < n; i2++)
            if(c[i2] == i1) for(int i3 = a[i2]; i3 <= b[i2]; i3++) mapp[i3]++;
        for(int i2 = 1; i2 < 30001; i2++) m = max(m, mapp[i2]);
    }
    cout << m;
    return 0;
}
