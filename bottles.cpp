#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M, S = 0;
    cin >> N >> M;
    while(true){
        S++;
        if (S % M == 0 && S % N == 0 && S % (M + N) == 0){
            cout << 2 * S / (M + N);
            break;
        }
    }
    return 0;
}
