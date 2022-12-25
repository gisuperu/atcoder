#include <bits/stdc++.h>
using namespace std;

int f(int t){
    return t*(t+2)+3;
}

int main(){
    int t;
    cin >> t;
    int result;
    result = f(f(f(t)+t)+f(f(t)));
    cout << result << endl;
}