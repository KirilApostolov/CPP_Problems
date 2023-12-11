#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, M, br = 0;
    string st;
    cin >> N >> M;
    getline(cin,st);
    for(int i = 0; i < M; i++){
        getline(cin,st);
        if(toupper(st[0]) == 'A' + N - 1 && br == 0) br = i + 1;
    }
    if (br) cout << "win " << br;
    else cout << "lose";
    return 0;
}
