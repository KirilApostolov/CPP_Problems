#include <iostream>
using namespace std;
int main(){
    int N, M, SumUP = 0, SumDown = 0;
    cin >> N >> M;
    int up[N], down[N];
    for (int i = 0; i < N; i++){
        cin >> up[i] >> down[i];
        SumUP += up[i];
        SumDown += down[i];
    }
    for (int i = 0; i < M; i++){
        SumUP = SumUP - up[i] + down[i];
        SumDown = SumDown - down[i] + up[i];
    }
    int i = 0;
    while(SumUP !=SumDown){
        if(i >= N-M) break;
        SumUP = SumUP - up[i+M] + down[i+M];
        SumUP = SumUP + up[i] - down[i];
        SumDown = SumDown - down[i+M] + up[i+M];
        SumDown = SumDown + down[i] - up[i];
        i++;
    }
    if (SumUP != SumDown) cout << "N/A";
    else cout << i+1;
}
