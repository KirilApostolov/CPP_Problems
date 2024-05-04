#include <bits/stdc++.h>
using namespace std;

int main() {
    int M, N, U, D, L, M1 = 0, M2 = 0, N1 = 0, N2 = 0, W1 = 0, W2 = 0, W3 = 0, W4 = 0; cin >> M >> N >> U >> D >> L;
    int f[L];
    for(int i = 0; i < L; i++) cin >> f[i];
    for(int i = 0; i < L; i++) {
        if(f[i] <= M) M1 = f[i];
        if(f[i] <= N) N1 = f[i];
    }
    for(int i = L - 1; i >= 0; i--) {
        if(f[i] >= M) M2 = f[i];
        if(f[i] >= N) N2 = f[i];
    }
    if (M1 != 0 && N1 != 0) W1 = (M - M1) * D + (N - N1) * U;
    if (M1 != 0 && N2 != 0) W2 = (M - M1) * D + (N2 - N) * D;
    if (M2 != 0 && N1 != 0) W3 = (M2 - M) * U + (N - N1) * U;
    if (M2 != 0 && N2 != 0) W4 = (M2 - M) * U + (N2 - N) * D;
    int W = INT_MAX;
    if (M1 == M && N1 == N) W = 0;
    if (W1 != 0) W = min(W, W1);
    if (W2 != 0) W = min(W, W2);
    if (W3 != 0) W = min(W, W3);
    if (W4 != 0) W = min(W, W4);
//    cout << M1 << " " << M2 << " " << N1 << " " << N2 << "\n";
//    cout << W1 << " " << W2 << " " << W3 << " " << W4 << " " << (N - M) * U << "\n";
    cout << W;
    return 0;
}
