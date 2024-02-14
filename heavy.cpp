#include<bits/stdc++.h>
using namespace std;

int sumc(int a){
    int s = 0;
    while(a > 0){
        s += a % 10;
        a /= 10;
    }
    return s;
}

int main(){
    pair<int, int> d[3]; cin >> d[0].second >> d[1].second >> d[2].second;
    for(int i = 0; i < 3; i++) d[i].first = sumc(d[i].second);
    sort(d, d + 3);
    cout << d[2].second;
	return 0;
}
