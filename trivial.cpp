#include<bits/stdc++.h>
using namespace std;

int SumD(int a){
    int sd = 1;
    float k = sqrt(a);
    for(int d = 2; d < k; d++)
        if(a%d == 0){
           sd += d;
           sd += a/d;
    }
    if(k == trunc(k) && a != 1) sd += k;
    return sd;
}

int main(){
    float minT = 10001, maxT = 0;
    int a, b, minC, maxC;
    cin >> a >> b;
    for(int i = a; i <= b; i++){
        int sd = SumD(i);
        float tr = 1.0 * sd/i;
        if(tr > maxT){
           maxT = tr;
           maxC = i;
        }
        if(tr < minT){
           minT = tr;
           minC = i;
        }
    }
    cout << minC << " " << maxC;
    return 0;
}
