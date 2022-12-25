#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int takahashi = a*60 + b;
    int aoki = c*60 + d;
    if(takahashi <= aoki){
        cout << "Takahashi" << endl;
    }else{
        cout << "Aoki" << endl;
    }


}