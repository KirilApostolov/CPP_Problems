#include <iostream>
using namespace std;

int main(){
    char c;
    long long n = 0, z = 0, r = 0;
    while ( cin >> c){
        n++;
        if(c == '0'){
            z++;
            r += n - z;
        }
    }
    cout << r;

    return 0;
}
