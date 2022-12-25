#include <bits/stdc++.h>
using namespace std;

map<char, int> alphabet = {{'a', 1},{'b', 2},{'c', 4},{'d', 8},{'e', 16},{'f', 32},{'g', 64},{'h', 128},{'i', 256},{'j', 512},{'k', 1024},{'l', 2048},{'m', 4096},{'n', 8192},{'o', 16384},{'p', 32768},{'q', 65536},{'r', 131072},{'s', 262144},{'t', 524288},{'u', 1048576},{'v', 2097152},{'w', 4194304},{'x', 8388608},{'y', 16777216},{'z', 33554432}};

int pick(string S, int sHead, int sEnd, unsigned int box){
    for(int i = sHead; i < sEnd; i++){
        char c = S.at(i);
        if(c == '('){
            // cerr << "(";
            int rlt;
            unsigned int newBox = box;
            if((rlt = pick(S, i+1, sEnd, newBox)) == -1){
                return -1;
            }else{
                i = rlt;
            }
        }else if(c == ')'){
            // cerr << ")" << endl;
            return i;
        }else{
            if((box ^ alphabet[c]) > 0){
                return -1;
            }else{
                box += alphabet[c];
            }
        }
    }
    return 0;
}

int main(){
    string S;
    
    cin >> S;
    unsigned int box;

    // int num = 1;
    // for(int i = 0; i < 27; i++){
    //     cout << "{\""<< char('a'+i) << "\", " << num << "}," << endl;
    //     num <<= 1;
    // }

    cout << ((pick(S, 0, S.length(), box) != -1 ) ? "Yes" : "No") << endl;
}