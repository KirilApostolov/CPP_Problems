#include <bits/stdc++.h>
using namespace std;

bool good(int a){
    if (a == 0) return true;
    int s = 0, f , l;
    f = a % 10;
    while(a > 0){
        l = a % 10;
        s += l;
        a /= 10;
    }
    if(s % 2 == 0 && s / 2 == f + l) return true;
    if(s % 2 == 0 && s / 2 == l) return true;
    return false;
}

bool intr(int a){
    if (a == 0) return true;
    int c = 0, nc = 0, k;
    while(a > 0){
        k = a % 10;
        a /= 10;
        if(k % 2 == 0) c++;
        else nc++;
    }
    if(nc <= c) return true;
    return false;
}

int main () {
    int n, m, k; cin >>n >> m >> k;
    if(good(n) && intr(n)) cout << "yes" << "\n";
    else cout << "no" << "\n";
    if(good(m) && intr(m)) cout << "yes" << "\n";
    else cout << "no" << "\n";
    if(good(k) && intr(k)) cout << "yes";
    else cout << "no";
    return 0;
}

