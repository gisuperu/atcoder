#include <bits/stdc++.h>
using namespace std;

int f (int a, int b, int c){
    return a*100 + b*10 + c;
}

int main(){
    int n;
    cin >> n;
    int a = (n/100)%10;
    int b = (n/10)%10;
    int c = n%10;

    cout << (f(a, b, c) + f(b, c, a) + f(c, a, b)) << endl;
}