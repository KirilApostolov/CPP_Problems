#include <iostream>
#include <queue>
using namespace std;

int main(){
    bool basket = false;
    long long n, p, k, br1 = 0, bas = 0, c, v = 0;
    cin >> n >> p >> k;
    queue<int> Q;
    for(int i = 1; i <=n; i++) Q.push(i);
    while(bas != p){
        c = Q.front();
        Q.pop();
        v++;
        if(c == 1) br1++;
        if(v != k) Q.push(c);
        else {
            if (c == 1) basket = true;
            bas++;
            v = 0;
        }
    }
    cout << br1 << endl;
    if(basket) cout << "BASKETBALL";
    else cout << "VOLLEYBALL";
    return 0;
}
