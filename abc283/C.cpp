#include <bits/stdc++.h>
// #include <string>
// #include <iostream>
using namespace std;

int main(){
    string S;
    
    cin >> S;

    int cmdtime = 0;

    char last_c;
    for(char c : S){
        if(c == '0'){
            if(last_c == '0'){
                cmdtime++;
                last_c = '-';
                continue;
            }else{
                last_c = c;
            }
        }else{
            if(last_c == '0'){
                cmdtime++;
            }
            cmdtime++;
            last_c = c;
        }
    }
    if(last_c == '0'){
        cmdtime++;
    }
    cout << cmdtime << endl;
}