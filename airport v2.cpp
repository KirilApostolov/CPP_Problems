#include <iostream>
using namespace std;
int main(){
    int n, m = 0, maxC = 0;
    int a[20000] = {0};
    int b[20000] = {0};
    int c[20000] = {0};
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> a[i] >> b[i] >> c[i];
        if(c[i] > maxC) maxC = c[i];
    }
    for(int i1 = 1; i1 <= maxC; i1++) {
        int mapp[30000] = {0};
        int maxB = 0;
        for (int i2 = 0; i2 < n; i2++){
            if(c[i2] == i1){
                if(b[i2] > maxB) maxB = b[i2];
                for(int i3 = a[i2]; i3 <= b[i2]; i3++) mapp[i3]++;
            }
        }
        for(int i2 = 1; i2 <= maxB; i2++)
            if(m < mapp[i2]) m = mapp[i2];
    }
    cout << m;
    return 0;
}
