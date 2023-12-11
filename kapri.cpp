#include <iostream>
using namespace std;

int main(){
    int N, br = 0, k; cin >> N;
    long long KK;
    for(int i = 0; i < N; i++){
        cin >> k;
        int L = 0, a = k, f = 1;
        while (a > 0){
            a /=10;
            f *= 10;
        }
        KK = 1L*k * k;
        int rikar = KK % f;
        int kap = KK / f;
//        cout << k << " - " << KK << " " << rikar << " " << kap << " " << kap + rikar << endl;
        if(kap + rikar == k) br++;
    }
    cout << br;
    return 0;
}
