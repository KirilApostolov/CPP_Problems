#include <bits/stdc++.h>
using namespace std;

bool maxString(string str1, string str2){
    if(str1[0] == '-' && str2[0] != '-') return false;
    if(str1[0] != '-' && str2[0] == '-') return true;
    int l1 = str1.length(), l2 = str2.length();
    for(int i = 0; i< str1.length(); i++) if (str1[i] == '.') l1 = i;
    for(int i = 0; i< str2.length(); i++) if (str2[i] == '.') l2 = i;
    if(l1 < l2) return false;
    if(l2 < l1) return true;
    if(str1[0] != '-' && str2[0] != '-') return str1 > str2;
    else return str1 < str2;
}

int main() {
    string s;
    getline(cin,s);
    for(int i = 0; i < s.length(); i++){
        if(!isdigit(s[i]) && s[i] != '-' && s[i] != '.') s[i] = ' ';
        if(s[i] == '-' && i != s.length()-1 && !isdigit(s[i+1]))s[i] = ' ';
        if(s[i] == '.' && i != s.length()-1 && i != 0 && !isdigit(s[i+1]) && !isdigit(s[i-1])) s[i] = ' ';
    }
    for(int i = 1; i < s.length(); i++)
        if(s[i] == '-' && isdigit(s[i-1])) s.insert(i,1,' ');
    stringstream ss;
    ss << s;
    string st;
    ss >> st;
    string sm = st;
    while(ss >> st) if(maxString(st, sm)) sm = st;
    cout << sm;

    return 0;
}
