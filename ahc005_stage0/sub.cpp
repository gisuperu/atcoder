#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x, y;
    cin >> n >> x >> y;
    string map[n];
    for(int i = 0; i < n; i++){
        cin >> map[i];
    }

    string emap[n];
    for(int i = 0; i < n; i++){
        emap[i] = "";
        for(int j = 0; j < n; j++){
            string s;
            if(i == x && j == y) s = "X";
            else if (map[i][j] == '#') s = ".";
            else s = "O";
            emap[i] = emap[i] + s;
        }
    }

    for(int i = 0; i < n; i++){
        cout << emap[i] << endl;
    }
}