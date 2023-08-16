#include <iostream>
using namespace std;

int main(){
    int M, N, turns;
    cin >> M >> N;
    if (N < M) swap(N, M);
    if (M == 1 || N == 1) {
        cout << 1 << endl << 1;
        return 0;
    }
    if ((M+N)%2 == 0 ){
        cout << 2;
        return 0;
    }
    else {
        if (M == 2) cout << 1 << endl << N;
        else cout << 1 << endl << N + M;
    }
    return 0;
}
