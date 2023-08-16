#include <iostream>
using namespace std;
int primes[100000000];
void findPrimes(int nn) {
    int i = 2,key;int max = 0;
    while (max < nn) {
        int j = 0;key=1;
        while (j < max && primes[j] * primes[j] <= i) {
            if (i % primes[j] == 0) key=0;
            j++;
        }
        if (key==1) {
            primes[max] = i;
            max++;
 //           cout <<i<<" ";
        }
    i++;
    }
    cout << max << " - " << primes[max-1];
}
int main() {
    int n;
    cout << "N= ";
    cin >> n;
    findPrimes(n);
}

