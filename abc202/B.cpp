#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    reverse(s.rbegin(), s.rend());
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '6')s.replace(i, 1, "9");
        else if(s[i] == '9')s.replace(i, 1, "6");
    }
    cout << s << endl;
}