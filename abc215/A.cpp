#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    string h = "Hello,World!";
    cin >> s ;

    bool f = true;
    if(s.length() == h.length()){
        for(int i = 0; i < s.length(); i++){
            if(s[i] != h[i]){
                f = false;
            }
        }
    }else f = false;
    
    if(f) cout << "AC" << endl;
    else cout << "WA" << endl;

}
