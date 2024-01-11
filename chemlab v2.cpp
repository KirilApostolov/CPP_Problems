#include <iostream>
using namespace std;

int main () {
    int sum = 0, n; cin >> n;
    int e[n+1];
    char a;
    for (int i = 1; i <= n; i++){
        cin >> a;
        e[i] = a - '0';
    }
    for (int i = 1; i <= n / 2; i++){
         cout << endl << "Group elelement = " << n / i << endl;
         for (int g = 1; g <= i; g++){
              int Offset = (g - 1) * n/i;
              int sr = Offset + n/i / 2 + n/i % 2;
              int epr = e[sr];
              cout << Offset << " " << sr << " " << epr;
              if (epr != 0)
                for(int w = epr; w <= n/i; w += epr){
                    e[Offset + w] = (e[Offset + w] + epr) % 10;
                    cout << " ch: " <<  Offset + w << " to " << e[Offset + w] << " ";
                }
              cout << endl;
         }
         cout << n << " ";
         for (int i = 1; i <= n; i++) cout << e[i];
         cout << endl;
    }
    for (int i = 1; i <= n; i++) {
         if(e[i] == 1) e[i]++;
         sum += e[i];
    }
    cout << sum;
    return 0;
}
