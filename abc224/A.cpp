#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    char c0 = s[s.length()-1];
    char c1 = s[s.length()-2];
    // char c2 = s[s.length()-3];
    if(c1 == 'e' && c0 == 'r'){
        cout << "er" << endl;
    }else{
        cout << "ist" << endl;
    }
}
