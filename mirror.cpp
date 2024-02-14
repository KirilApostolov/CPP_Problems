#include<bits/stdc++.h>
using namespace std;

bool isPrime(int a){
    for(int i = 2; i * i <= a; i++)
        if(a % i == 0 ) return false;
    return true;
}

int mirror(int a){
    int s = 0;
    while(a > 0){
        s = 10*s + a%10;
        a /= 10;
    }
    return s;
}

int main(){
    int m, n, br = 0; cin >> m >> n; if(m > n) swap(m, n);
    for(int i = m; i <=n; i++) if (isPrime(i) && isPrime(mirror(i))) br++;
    cout << br;
	return 0;
}
