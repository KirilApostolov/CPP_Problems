#include <iostream>
using namespace std;

int main(){
    int n, X = 0, Y = 0, eq = 1, ob = 0, pX = 1, pY = 1, p = 0, c; cin >> n;
    bool rav = false;
    for(int i = 0; i < n; i++){
        cin >> c;
        if(c == 1) {
            X++;
            if (p == 1) pX++;
            else{
                if(rav) ob = max(ob, pY);
                rav = false;
                pY = 1;
            }

        }
        if(c == 2) {
            Y++;
            if (p == 2) pY++;
            else{
                if(rav) ob = max(ob, pX);
                rav = false;
                pX = 1;
            }
        }
        if(X == Y) {
           rav = true;
           eq++;
        }
        p = c;
 //       cout << X << ":" << Y << " " << eq << " " << ob << " - " << pX << "-" << pY << "\n";
    }
    ob = max(ob, max(pY, pX));
    cout << X << " " << Y << "\n" << eq << "\n" << ob;
    return 0;
}
