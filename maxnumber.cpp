#include<iostream>
using namespace std;

int d1[10], d2[10];

int main(){
    string st;
    cin >> st;
    for (int i = 0; i < st.size(); i++) d1[st[i] - '0']++;
    cin >> st;
    for (int i = 0; i < st.size(); i++) d2[st[i] - '0']++;
    bool t = true;
    for (int i = 9; i >= 0; i--)
        while(d1[i] > 0 && d2[i] > 0){
            t = false;
            cout << i;
            d1[i]--;
            d2[i]--;
    }
    if(t) cout << "No solution";
	return 0;
}
