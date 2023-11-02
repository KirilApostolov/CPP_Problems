#include <bits/stdc++.h>
using namespace std;

int main(){
    int h1, m1;
    cin >> h1 >> m1;
    int t1 = h1*60 + m1;
    int h2, m2;
    h2 = m1 / 5;
    m2 = (m1 % 5) * 12;
    int t2 = h2*60 + m2;
    if (t2 < t1) t2 += 12*60;
    int t = t2 - t1;

    if (t == 0) t += 12*60;
    if (h2 == 0) h2 = 12;

    cout << h2 << " " << m2 << endl;
    cout << t/60 << " " << t%60;

    return 0;
}
