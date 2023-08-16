#include <iostream>
using namespace std;

int const MaxNumber = 1000000000;
int* arr = new int[MaxNumber];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long S;
    int N, a, MinEl = MaxNumber, MaxEl = 0;
    cin >> N >> S;
    for (int i = 0; i < N; i++) {
        cin >> a;
        arr[a]++;
        if (a < MinEl) MinEl = a;
        if (a > MaxEl) MaxEl = a;
    }
    while(S != 0){
        if((MinEl == MaxEl) || (S < arr[MinEl] && S < arr[MaxEl])) break;
        if(arr[MinEl] < arr[MaxEl]){
            While(arr[k] == 0)

            S -= arr[MinEl];
            arr[MinEl+1] += arr[MinEl];
            arr[MinEl] = 0;
            MinEl++;
        } else {
            S -= arr[MaxEl];
            arr[MaxEl-1] += arr[MaxEl];
            arr[MaxEl] = 0;
            MaxEl--;
        }
    }
    cout << MaxEl - MinEl;
    return 0;
}
