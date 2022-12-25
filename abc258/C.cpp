#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, Q;
    string S;
    cin >> N >> Q >> S;

    int front = 0;

    for(int q = 0; q < Q; q++){
        int op, x;
        cin >> op >> x;
        if(op == 1){
            front = (front-x + N)%N;
        }else if(op == 2){
            cout << S.at((front+x-1 + N)%N) << endl;
        }else{
            cerr << "Query error";
        }
    }
}