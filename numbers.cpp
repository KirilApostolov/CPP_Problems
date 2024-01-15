#include<iostream>
using namespace std;

int main(){
    long long n, k, s1, s2 = 0, c; cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> c;
        s2 += c;
    }
    cout << ((n * (n + 1) /2) - s2) / (k - 1);
    return 0;
}
