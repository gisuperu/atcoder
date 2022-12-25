#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;

    int i = 0;
    while(i < n){
        if(s[i] == '1')break;
        i++;
    }
    if(i % 2 == 0)cout << "Takahashi" << endl;
    else cout << "Aoki" << endl;
}