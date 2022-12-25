#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;

    int d = b - a;
    if(d < 0)cout << 0 << endl;
    else cout << d + 1 << endl;
}