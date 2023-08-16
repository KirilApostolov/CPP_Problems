#include <bits/stdc++.h>
using namespace std;

bool maxString(string str1, string str2){
    if(str1[0] == '-' && str2[0] != '-') return false;
    if(str1[0] != '-' && str2[0] == '-') return true;
    int l1 = 0, l2 = 0;
    while (l1 < str1.length() && str1[l1] != '.') l1++;
    while (l2 < str2.length() && str1[l2] != '.') l2++;
    if(str1[0] != '-' && str2[0] != '-'){
        if (l1<l2) str1.insert(0,l2-l1,'0');
        else str2.insert(0,l1-l2,'0');
        return str1 > str2;
    } else{
        if (l1<l2) str1.insert(1,l2-l1,'0');
        else str2.insert(1,l1-l2,'0');
        return str1 < str2;
    }
}

int main() {
    string s, current = "";
    getline(cin,s);
    vector<string> numbers;
    bool point = false;
    if (isdigit(s[0])) current += s[0];
    if (isdigit(s[1]) && s[0] == '-') current += s[0];
    for (int i = 1; i < s.length() - 1; i++){
       if (isdigit(s[i])) current += s[i];
       else if (s[i] == '-' && isdigit(s[i+1]))
            if (current == "") current += s[i];
            else {
                numbers.push_back(current);
                current = "-";
                point = false;
            }
       else if (s[i] == '.' && isdigit(s[i+1]) && isdigit(s[i-1]) && !point) {
            current += s[i];
            point = true;
       }
       else if (current != "") {
            numbers.push_back(current);
            current = "";
            point = false;
       }
    }
    if (isdigit(s[s.length()-1])) current += s[s.length()-1];
    if (current != "") numbers.push_back(current);
    string sMax = numbers[0];
//    cout << numbers[0] << endl;
    for(int i = 1; i < numbers.size(); i++){
        if(maxString(numbers[i], sMax)) sMax = numbers[i];
//        cout << "sMax= " << sMax << " - " << numbers[i] << endl;
    }
    cout << sMax;

    return 0;
}
