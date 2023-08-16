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
    int a[sizeDev] = {}, j;
    for(auto x : primeDev){
        cout << x.first << " - " << x.second << "\n";
        gen.push_back({x.first, x.second});
    }
    cout << endl;
    vector <int> Dev;
    while(true){
        int devi = 1;
        for(int i = 0; i < sizeDev; i++){
            devi *= pow(gen[i].first,a[i]);
            cout << a[i] << "-" << devi << " " ;
        }
        Dev.push_back(devi);
        cout << endl;
        for(j = 0; j < sizeDev; j++) {
            a[j]++;
            if(a[j] <= gen[j].second) break;
            else a[j] = 0;
        }
        if(j >= sizeDev) break;
    }
    cout << endl;
    for(int i = 0; i < Dev.size(); i++) cout << Dev[i] << " ";
    return 0;
}
