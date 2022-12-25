#include <bits/stdc++.h>
using namespace std;

int main(){
    int h;
    cin >> h;

    long double d = sqrtl(h) * sqrtl(12800000 + h);
    // long double d = sqrtl(h * (12800000 + h));

    // cout << d << endl;
    printf("%.2Lf\n", d);
}