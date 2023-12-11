#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;
    cout << 2 * N * M / __gcd(N, M) * (N + M) / __gcd(N * M / __gcd(N, M), M + N) / (M + N);
    return 0;
}
