#include <iostream>
using namespace std;
int main(){
    long long n, m;
    cin >> n >> m;
    if (n > m) swap(n, m);
    if (n == 1){
        cout << m;
        return 0;
    }
    m--;
    n--;
    for (int i = 1; i <= n/2; i++){
        if(n%i == 0 && m%(n/i) == 0){
            cout << n/i + 1;
            return 0;
        }
    }
    cout << 2;
    return 0;
}
