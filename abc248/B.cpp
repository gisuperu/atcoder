#include <bits/stdc++.h>
using namespace std;

int main(){
    long a, b, k;
    cin >> a >> b >> k;

    int scream = 0;
    while(a < b){
        a *= k;
        scream++;
    }
    cout << scream << endl;


}