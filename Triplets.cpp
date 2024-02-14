#include <iostream>
using namespace std;

const int maxC = 50001;
bool arr[maxC];

int main () {
    int n, br = 0;
    cin >> n;
    int c[n];
    for(int i = 0; i < n; i++){
        cin >> c[i];
        arr[c[i]] = true;
    }
    for(int i = 0; i < n - 1; i++)
        for(int j = i + 1; j < n; j++)
            if(arr[c[i]+c[j]] == true) br++;
    cout << br * 2;
    return 0;
}
