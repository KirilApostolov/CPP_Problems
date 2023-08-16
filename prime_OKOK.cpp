#include <bits/stdc++.h>
using namespace std;

bool isPrime(int N){
    if (N<2) return false;
    double M = sqrt(N);
    for (int i = 2; i <= M; i++) if (N%i == 0) return false;
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int N, i = 2;
    cin >> N;
    map<int,int> primeDev;
    while(N != 1) {
        if (isPrime(N)){
           primeDev[N]++;
           break;
        }
        if (isPrime(i))
        while (N%i ==0) {
            N /= i;
            primeDev[i]++;
        }
        i++;
    }
    int sizeDev = primeDev.size();
    vector <pair<int, int>> gen;
    bool rev[sizeDev] = {};
    int a[sizeDev] = {}, j;
    vector <int> Dev;
    for(auto x : primeDev) gen.push_back({x.first, x.second});
    while(true){
        int devi = 1;
        for(int i = 0; i < sizeDev; i++) devi *= pow(gen[i].first,a[i]);
        Dev.push_back(devi);
        for(j = 0; j < sizeDev; j++)
            if(j != sizeDev && rev[j]){
                a[j]--;
                if(a[j] >= 0 ) break;
                else {a[j] = 0; rev[j] = false;}
            } else {
                a[j]++;
                if(a[j] <= gen[j].second) break;
                else {a[j]--; rev[j] = true;}
            }
        if(j >= sizeDev) break;
    }
    for(int i = 0; i < Dev.size(); i++) cout << Dev[i] << " ";
    return 0;
}
