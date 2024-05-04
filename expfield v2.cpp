#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

int plot(int n, int m){
    int k = 1;
    int a[n][m], b[n][m];
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) a[i][j] = k++;
    k = 1;
    for(int j = 0; j < m; j++) for(int i = 0; i < n; i++) b[i][j] = k++;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++){
            char c = ' ';
            if(a[i][j] == b[i][j]) c = '=';
            cout << setw(2) << a[i][j] << c << setw(2) << b[i][j] << "|";
        }
        cout << "\n";
    }
    return 0;
}

int main(){
    for(int j = 0; j < 10; j++)
        for(int i = 0; i < 10; i++) {
            cout << j << " " << i << "\n";
            plot(j, i);
            cout << "\n";
    }
}
