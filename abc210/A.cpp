#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, x, y;
    cin >> n >> a >> x >> y;

    if(a < n){
        cout << a*x + (n-a)*y << endl;
    }else{
        cout << n*x << endl;
    }
}
