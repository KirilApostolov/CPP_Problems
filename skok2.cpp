#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long A, B, N, Current, cnt = 0;
    cin >> A >> B >> N;
    long long T[N];
    for (int i = 0; i < N; i++) cin >> T[i];
    sort(T, T + N);
    Current = A;
    for (int i = 0; i < N; i++){
        cnt += ((T[i]+1) - Current)/2 + ((T[i]+1) - Current)%2;
        Current = T[i] + 1;
    };
    cnt += (B - Current)/2 + (B - Current)%2;
    cout << cnt;
    return 0;
}
