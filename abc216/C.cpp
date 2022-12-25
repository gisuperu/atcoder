#include <bits/stdc++.h>
using namespace std;

int main(){
    long n;
    cin >> n;
    string magic = "";



    while(n > 0){
        cerr << n << endl;
        if(n % 2 == 1){
            magic = "A" + magic;
            n--;
        }else{
            n /= 2;
            magic = "B" + magic;
        }
        
    }
    
    cout << magic << endl;
}
