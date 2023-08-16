#include <bits/stdc++.h>
using namespace std;

int XPowerYModZ( int x, int y, int z ) {
	long long a = x % z;
	int t = 1;
	while( y > 0 ){
		if( y & 1 ) t = (t * a) % z;
		y /= 2;
		a = (a * a) % z;
		cout << "y = " << y << ", a = " << a << endl;
	}
	return(t);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int x, y, z;
    x = 545566, y = 34562, z = 15638;
    cout << XPowerYModZ(x, y, z);
    return 0;
}
