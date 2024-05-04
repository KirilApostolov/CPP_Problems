#include <iostream>
using namespace std;

int main(){
    int M, N; cin >> M >> N;
    if (M == 1 || N == 1) {
        cout << 1 << endl << 1;
        return 0;
    }
    if ((M+N)%2 == 0 ){
        cout << 2;
        return 0;
    } else {
        if (M == 2 || N == 2 ) cout << 1 << endl << max(N, M);
        else cout << 1 << endl << N + M;
    }
    return 0;
}
