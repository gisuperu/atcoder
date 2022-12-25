#include <bits/stdc++.h>
using namespace std;

int main(){
    int xa, ya, xb, yb;
    cin >> xa >> ya >> xb >> yb;

    int xr, yr;
    xr = abs(xb - xa);
    yr = abs(yb - ya);

    bool b1 = (xr + yr) == 2;
    bool b2 = (xr + yr) == 4 && xr != yr;
    bool b3 = (xr + yr) == 6 && 2 <= xr && xr <= 4 && 2 <= yr && yr <= 4;
    if(b1 || b2 || b3) cout << "Yes" << endl;
    else cout << "No" << endl;

}