#include <iostream>
using namespace std;
int main(){
    int n, a, S = 0, br = 1, maxR = 0, old, maxS;
    cin >> n;
    n--;
    cin >> old;
    S = old;
    for (int i = 1; i < n; i++){
        cin >> a;
        if (a > old){
            br++;
            S += a;
        } else {
            if (br > maxR){
                maxR = br;
                maxS = S;
            }
            br = 1;
            S = a;
        }
        old = a;
    }
    if (br > maxR){
        maxR = br;
        maxS = S;
    }
    int deli;
    for (int i = 1; i <= maxS / 2; i++)
        if (maxS % i == 0) deli = i;
    cout << maxR << endl << deli;
    return 0;
}
