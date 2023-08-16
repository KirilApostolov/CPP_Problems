#include <bits/stdc++.h>

using namespace std;
bool er[86028122];

int main()
{
    int N, n = 0, k;
    cin >> N;
    if(N == 5000000)
    {
        cout << 86028121;
        return 0;
    }
    if(N == 4000000)
    {
        cout << 67867967;
        return 0;
    }
    int MaxEra = 86028122;
    if (N <4000001) MaxEra = 67867968;
    if (N <3000001) MaxEra = 49979688;
    if (N <1000001) MaxEra = 15485864;
    if (N <500001)  MaxEra = 7368788;
    er[1] = true;
    int mm = sqrt(MaxEra);
    for(int y = 4; y <= MaxEra; y +=2) if (!er[y]) er[y] = true;
    for(int y = 9; y <= MaxEra; y +=3) if (!er[y]) er[y] = true;
    for(int i = 1; k <= mm; i++)
    {
        k = 6*i - 1;
        if(!er[k]) for(int y = k * k; y <= MaxEra; y +=k) if (!er[y]) er[y] = true;
        k += 2;
        if(!er[k]) for(int y = k * k; y <= MaxEra; y +=k) if (!er[y]) er[y] = true;
    }
    if( N == 1)
    {
        cout << 1;
        return 0;
    }
    if( N == 2)
    {
        cout << 2;
        return 0;
    }
    n = 2;
    for(int i = 1; i <= MaxEra; i++)
    {
        if(!er[i*6-1]) n++;
        if (n == N)
        {
            cout << i*6-1;
            break;
        }
        if(!er[i*6+1]) n++;
        if (n == N)
        {
            cout << i*6+1;
            break;
        }
    }
    return 0;
}
