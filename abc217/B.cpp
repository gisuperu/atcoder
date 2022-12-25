#include <bits/stdc++.h>
using namespace std;

int main(){
    string input[3];
    cin >> input[0] >> input[1] >> input[2];

    string contest[4] = {"ABC", "ARC", "AGC", "AHC"};
    bool f[4] = {false, false, false, false};

    for(int j = 0; j < 3; j++){
        string s = input[j];
        for(int i = 0; i < 4; i++){
            if(contest[i] == s){
                f[i] = true;
                break;
            }
        }
    }

    for(int i = 0; i < 4; i++){
        if(!f[i]){
            cout << contest[i] << endl;
            break;
        }
    }


}
