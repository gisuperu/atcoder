#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    if(abs(a) < abs(b)){
        if(b < 0 && c%2 == 1)cout << ">" << endl;
        else cout << "<" << endl;
    }else if(abs(a) > abs(b)){
        if(a < 0 && c%2 == 1)cout << "<" << endl;
        else cout << ">" << endl;
    }else{
        if(c%2 == 1 && a < b) cout << "<" << endl;
        else if(c%2 == 1 && a > b) cout << ">" << endl;
        else cout << "=" << endl;
    }
}