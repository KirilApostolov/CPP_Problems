#include <iostream>
#include <climits>
using namespace std;

int main(){
    long long a, b, p, q, s, w1 = 0, w2 = 0, w3 = 0;
    cin >> a >> b >> p >> q >> s;
    if (p < q) swap(p,q);
    if (b%q != 0 && b%s != 0 ||
       (a%(s+p) != 0 && (a-s)%(s+p) !=0 && (a-p)%(s+p) != 0) ||
       (b%s != 0 && a > p) ||
       (b%q != 0 && a > s)){
        cout << "NO";
        return 0;
    }
    long long h1 = b / q, h2 = b / s;
    if (a%(s+p) == 0) w1 = (a/(s+p)) * (h1 + h2);
    if ((a-s)%(s+p) == 0) w2 = ((a-s)/(s+p)) * (h1 + h2) + h2;
    if ((a-p)%(s+p) == 0) w3 = ((a-p)/(s+p)) * (h1 + h2) + h1;
    long long maxw = max(w1, max(w2,w3));
    if (w1 == 0) w1 = LLONG_MAX;
    if (w2 == 0) w2 = LLONG_MAX;
    if (w3 == 0) w3 = LLONG_MAX;
    cout << min (w1, min(w2,w3)) << " " << maxw;
    return 0;
}
