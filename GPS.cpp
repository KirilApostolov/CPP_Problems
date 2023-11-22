#include <iostream>
using namespace std;
int main(){
    int n, maxS = 1, currentS = 1, prev, a;
    cin >> n;
    cin >> prev;
    for (int i = 1; i < n; i++){
        cin >> a;
        if (a <= prev){
            maxS = max(maxS, currentS);
            currentS = 1;
        } else currentS++;
        prev = a;
    }
    cout << maxS;
    return 0;
}
