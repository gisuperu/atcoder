#include <bits/stdc++.h>
using namespace std;

int main(){
    long r,x,y;
    cin >> r >> x >> y;

    long double d = sqrt((x*x) + (y*y));
    if(d == r)cout << 1 << endl;
    else if(d <= 2 * r)cout << 2 << endl;
    else cout << ceil(d/r) << endl;
}