#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, d;
    long long f1 = 0, f2 = 0, Dx = 1;
    cin >> a;
    for (int i = 0; i < a; i++) {
         cin >> d;
         f1 = f1 * 10 + d;
         f2 = d * Dx + f2;
         Dx *= 10;
    }
    Dx /= 10;
    long long maxNumber = max(f1,f2);
    for (int i = 0; i < a; i++) {
        f1 = (f1 % Dx) * 10 + f1/Dx;
        maxNumber = max(maxNumber,f1);
        f2 = (f2 % Dx) * 10 + f2/Dx;
        maxNumber = max(maxNumber,f2);
    }
    cout << maxNumber;
}

