#include <bits/stdc++.h>
using namespace std;

int main(){
    int p;
    cin >> p;

    int kaijo[] = {1, 2, 6, 24, 120, 720, 5040, 40320, 362880, 3628800};

    // boolan f = true;
    int coins = 0;
    for(int i = 10; i >= 0; i--){
        int used = p/kaijo[i];
        if(100 < used){
            coins += 100;
            p = 100*kaijo[i];
            // f = false;
        }else{
            coins += used;
            p = p % kaijo[i];
            // f = true;
        }
    }
    cout << coins << endl;
    
}