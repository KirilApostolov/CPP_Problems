#include <bits/stdc++.h>
#define endl '\n';
using namespace std;
const int maxNumber = 50000;
int numbers[maxNumber+1];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, a, s;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a;
        s = i - a + 1;
        if (s < 0) s = n + s;
        numbers[s]++;
    }
    int m = 1, indx = 0;
    for(int i = 1; i < maxNumber; i++)
        if(numbers[i] > m) {
           m = numbers[i];
           indx = i;
        }
    cout << indx+1;

    return 0;
}
