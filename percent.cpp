#include<iostream>
using namespace std;

int main(){
    int n; cin >> n;
    for (int i = 0; i < n; i++){
        int a, b, c, d, e; cin >> a >> b >> c >> d >> e;
        for (int s = 1; s <= 100; s++) if (a*s % 100 + b*s % 100 + c*s % 100 + d*s % 100 + e*s % 100 == 0){
            cout << s << "\n";
            break;
        }
    }
	return 0;
}
