#include<iostream>
using namespace std;

int main(){
	char a;
  	int n; cin >> n;
  	int d[n];
  	for(int i = 0; i < n; i++){
		cin >> a;
		d[i] = a - '0';
  	}
	for(int g = 1; g <= n / 2; g++) {
		int s = n / g;
        for(int b = 0; b + s - 1 < g * s; b += s){
			int middle = (2 * b + s - 1) / 2;
			int digit = d[middle];
			if (digit == 0) continue;
            for(int i = b + digit - 1; i < b + s; i += digit) d[i] = (d[i] + digit) % 10;
        }
	}
	int sum = 0;
	for(int i = 0; i < n; i++)	{
		if (d[i] == 1) d[i]++;
		sum += d[i];
	}
	cout << sum;

	return 0;
}
