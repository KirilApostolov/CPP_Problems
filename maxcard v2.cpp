#include <bits/stdc++.h>
using namespace std;

int main() {
    string c[4];
    for(int i = 0; i < 4; i++) cin >> c[i];
    string result[24];
    result[0] = c[0] + c[1] + c[2] + c[3];
    result[1] = c[0] + c[1] + c[3] + c[2];
    result[2] = c[0] + c[2] + c[1] + c[3];
    result[3] = c[0] + c[2] + c[3] + c[1];
    result[4] = c[0] + c[3] + c[1] + c[2];
    result[5] = c[0] + c[3] + c[2] + c[1];

    result[6] = c[1] + c[0] + c[2] + c[3];
    result[7] = c[1] + c[0] + c[3] + c[2];
    result[8] = c[1] + c[2] + c[0] + c[3];
    result[9] = c[1] + c[2] + c[3] + c[0];
    result[10]= c[1] + c[3] + c[0] + c[2];
    result[11]= c[1] + c[3] + c[2] + c[0];

    result[12]= c[2] + c[0] + c[1] + c[3];
    result[13]= c[2] + c[0] + c[3] + c[1];
    result[14]= c[2] + c[1] + c[0] + c[3];
    result[15]= c[2] + c[1] + c[3] + c[0];
    result[16]= c[2] + c[3] + c[0] + c[1];
    result[17]= c[2] + c[3] + c[1] + c[0];

    result[18]= c[3] + c[0] + c[1] + c[2];
    result[19]= c[3] + c[0] + c[2] + c[1];
    result[20]= c[3] + c[1] + c[0] + c[2];
    result[21]= c[3] + c[1] + c[2] + c[0];
    result[22]= c[3] + c[2] + c[0] + c[1];
    result[23]= c[3] + c[2] + c[1] + c[0];

    sort(result, result + 24);
    cout << result[23];
    return 0;
}
