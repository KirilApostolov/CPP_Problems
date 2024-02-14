#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, t = 0; cin >> n; int b[n];
    for(int i = 0; i < n; i++) cin >> b[i];
    for(int i = 0; i < n - 3; i++)
        for(int j = i + 2; j < n -1; j++)
            t = max(t, b[i] + b [i+1] + b[j] + b[j+1]);
    cout << t;
	return 0;
}
