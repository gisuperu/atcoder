#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, y;
    cin >> x >> y;

    if(x >= y) cout << 0 << endl;
    else{
        int n = (y-x)/10 + (1 ? (y-x)%10 > 0 : 0);
        cout << n << endl;
    }


}
