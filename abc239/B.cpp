#include <bits/stdc++.h>
using namespace std;

int main(){
    long x;
    cin >> x;

    int a = 0;
    if(x%10 < 0) a = -1;

    cout << x/10 + a << endl;

}