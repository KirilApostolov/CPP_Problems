#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M, br = 0;
    char a;
    cin >> N >> M;
    for(int i = 0; i < M; i++){
        cin >> a;
        if(toupper(a) == 'A' + N - 1 && br == 0) br = i + 1;
        while (a != '.') cin >> a;
    }
    if (br) cout << "win " << br;
    else cout << "lose";
    return 0;
}
