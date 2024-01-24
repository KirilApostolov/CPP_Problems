#include <iostream>
using namespace std;

int ll(long long k){
    if(k == 3  || k == 4  || k == 5  || k == 6)  return 3;
    if(k == 13 || k == 14 || k == 15 || k == 16) return 7;
    if(k == 0  || k == 1  || k == 2  || k == 7  || k == 8 || k == 19) return 1;
    if(k == 10 || k == 11 || k == 12 || k == 17 || k == 18 || k == 9) return 9;
}

int main () {
    long long K, M, N; cin >> K >> M >> N;
    K %= 20; M %= 20; N %= 20;
    cout << ll(K) << "\n" << ll(M) << "\n" << ll(N);
    return 0;
}
