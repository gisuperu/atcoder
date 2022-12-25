#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    for(int i=0; i<10; i++){
        bool existS = false;
        for(char c : s){
            if(i == c - '0'){
                existS = true;
                break;
            }
        }
        if(!existS){
            cout << i << endl;
            break;
        }
    }


}