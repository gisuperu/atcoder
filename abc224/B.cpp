#include <bits/stdc++.h>
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    int map[h][w];

    for(int i = 0; i < h; i++){
        for(int j = 0; j < w; j++){
            int a;
            cin >> a;
            map[i][j] = a;
        }
    }

    bool is = true;

    for(int i1 = 0; i1 < h; i1++){
        for(int j1 = 0; j1 < w; j1++){
            
            for(int i2 = i1+1; i2 < h; i2++){
                int n = map[i1][j1] - map[i2][j1];
                for(int j2 = j1+1; j2 < w; j2++){
                    int m = map[i2][j2] - map[i1][j2];
                    if(n + m > 0){
                        is = false;
                        break;
                    }
                }
                if(!is)break;
            }
            if(!is)break;
        }
        if(!is)break;
    }

    if(is) cout << "Yes" << endl;
    else cout << "No" << endl;
}
