#include <iostream>
using namespace std;
int main(){
    int n, m, S = 0, br = 0;
    cin >> n >> m;
    for (int i = n; i <= m; i++){
        int l = i/1000, r = i % 1000;
        if(i % (l + r) == 0 && r > 99){
            br++;
            S += i;
        }
    }
    cout << br << " " << S;
    return 0;
}
