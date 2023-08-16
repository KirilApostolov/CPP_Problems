#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int turns;
    string left, right, mapp;
    cin >> left;
    cin >> right;
    cin >> turns;
    reverse(left.begin(), left.end());
    string current = left + right;
    for(int i = 0; i < left.length(); i++) mapp = mapp + "l";
    for(int i = 0; i < right.length(); i++) mapp = mapp + "r";
    for(int i1 = 1; i1 <= turns; i1++){
        string oldM = mapp;
        for (int i2 = current.length() - 2; i2 >=0; i2--){
            if(oldM[i2] == 'l' && oldM[i2+1] == 'r'){
                swap(mapp[i2], mapp[i2+1]);
                swap(current[i2], current[i2+1]);
            }
        }
    }
    cout << current;
    return 0;
}
