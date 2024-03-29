#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, br = 0; cin >> n;
    int r[n];
    for(int i = 0; i < n; i++) cin >> r[i];
    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++){
           br++;
           if (j < n - 1 && r[j-1] > r[j] && r[j] < r[j+1]) break;
           if (j < n - 1 && r[j-1] < r[j] && r[j] > r[j+1]) break;
        }
    cout << br * 2;
    return 0;
}

