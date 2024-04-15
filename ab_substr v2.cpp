#include <iostream>
using namespace std;
int main(){
    char c, p = ' ';
    int n = 0, a = 0, b = 0;
    while(cin >> c){
        if(c == 'a' && p == ' ') a++;
        if(c == 'a' && p == 'a') a++;
        if(c == 'b' && p == 'b') b++;
        if(c == 'a' && p == 'b') {
            n += min(a, b);
            a = 1;
            b = 0;
        }
        if(c == 'b' && p == 'a') b++;
        p = c;
    }
    n += min(a, b);
    cout << n;
    return 0;
}
