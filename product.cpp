#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a, b, d, b2 = 0, b5 = 0, t, s; cin >> d >> a >> b;
    if(a % d == 0) s = a;
    else s = a + (d - a % d);
    for (int i = s; i <= b; i += d){
        t = i;
        while (t % 10 == 0) {
               b5++;
               b2++;
               t /= 10;
        }
        while (t % 5 == 0) {
               b5++;
               t /= 5;
        }
        while (t % 2 == 0) {
               b2++;
               t /= 2;
        }
    }
    cout << min (b2, b5);

    return 0;
}
