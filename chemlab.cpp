#include <iostream>
using namespace std;

int main () {
    int sum = 0, n; cin >> n;
    int e[n+1]; e[0] = 0;
    char a;
    for (int i = 1; i <= n; i++){
        cin >> a;
        e[i] = a - '0';
    }
//    cout << endl;
    for (int i = 1; i <= n; i++){
        int E = n / i;
        if (E == 1) break;
        for (int g = 1; g <= i; g++){
             int O = (g - 1) * E, sr = O + E/2;
//             cout << endl << i << " " << g << " " << sr << " " << e[sr];
             if(e[sr] == 0) continue;
             int Sredna = e[sr];
             for(int w = Sredna; w <= E; w += Sredna){
                e[O + w] = (e[O + w] + Sredna) % 10;
//                cout << " ch -> " << w << " " << e[O + w];
             }
        }
 //       cout << endl;
    }
    for (int i = 1; i <= n; i++) {
         if(e[i] == 1) e[i]++;
         sum += e[i];
    }
    cout << sum;
    return 0;
}
