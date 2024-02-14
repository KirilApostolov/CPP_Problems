#include<bits/stdc++.h>
using namespace std;

int main (){
    map<int, int> sg;
    int n, m, v, m1 = 0, m2 = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> v;
        sg[v]++;
        m1 = max(m1, v);
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> v;
        sg[v]--;
        m2 = max(m2, v);
    }
    if(m1 != m2){
        cout << "NO";
        return 0;
    }
///    cout << "\n";
    map<int, int>::iterator itr;
    int br = 0;
    for (itr = sg.begin(); itr != sg.end(); itr++){
         br += abs(itr->second);
         if (itr->second == 0) br++;
///         cout << itr->first << "  " <<  itr->second << endl;
    }
    cout << br;

    return 0;
}
