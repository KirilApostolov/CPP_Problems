#include <bits/stdc++.h>
using namespace std;

const int maxC = 100001;
int cards[maxC];

int main () {
    int n, c, tr = 0, minCard = 1, maxCard = 100000; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> c;
        cards[c]++;
        if(c % 2 == 0 && cards[c/2] > 1){
            tr++;
            cards[c]--;
            cards[c/2] -=2;
        } else if (c <= 50000 && cards[c] > 1 && cards[2*c] > 0){
            tr++;
            cards[c] -= 2;
            cards[c*2]--;
        }
    }
    cout << tr << " " << n - 3 * tr << "\n";
    if(n - 3 * tr == 0){
        cout << "NONE";
    } else {
        while(!cards[minCard]) minCard++;
        while(!cards[maxCard]) maxCard--;
        cout << minCard << " " << maxCard;
    }
    return 0;
}
