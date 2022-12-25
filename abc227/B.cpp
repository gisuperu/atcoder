#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int s[n];
    for(int i = 0; i < n; i++) cin >> s[i];

    int limit = 150;
    int exs[limit][limit];
    for(int i = 1; i <= limit; i++){
        for(int j = 1; j <= limit; j++){
            exs[i-1][j-1] = 3*(i + j) + i*j;
        }
    }

    int lier = 0;

    for(int k : s){
        int l = 150;
        bool trust = false;
        for(int i = 0; i < l; i++){
            for(int j = i; j < l; j++){
                if(k == exs[i][j]) trust = true;
            }
        }
        if(trust) lier++;
    }

    cout << lier << endl;
}
