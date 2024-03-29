#include <bits/stdc++.h>

using namespace std;

int main(){
    long long A, B, i; cin >> A >> B;
    long long D = __gcd(A, B);
    vector<long long> Dx;
    for(i = 1; i * i < D; i++)
        if (D % i == 0){
            Dx.push_back(i);
            Dx.push_back(D / i);
        }
    if (i * i == D) Dx.push_back(i);
    sort(Dx.begin(), Dx.end());
    for(i = 0; i < Dx.size(); i++) cout << Dx[i] << " " << A/Dx[i] << " " << B/Dx[i] << "\n";
    return 0;
}
