#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;

    vector<vector<bool> > line(n+1, vector<bool>(x+1, false));

    line[0][0] = true;
    for(int i=1; i <= n; i++){
        int a, b;
        cin >> a >> b;

        for(int j=0; j < x; j++){
            if(line[i-1][j]){
                // line[i][j] = true;
                if(j+a <= x) line[i][j+a] = true;
                if(j+b <= x) line[i][j+b] = true;
            }
        }
    }

    if(line[n][x]) cout << "Yes" << endl;
    else cout << "No" << endl;

}