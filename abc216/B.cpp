#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin >> x;
    string name[x][2];
    for(int i = 0; i < x; i++){
        cin >> name[i][0] >> name[i][1];
    }

    bool isSame = false;
    for(int i = 0; i < x; i++){
        for(int j = i+1; j < x; j++){
            if(name[i][0] == name[j][0] && name[i][1] == name[j][1]){
                isSame =true;
                break;
            }
        }
    }

    if(isSame)cout << "Yes" << endl;
    else cout << "No" << endl;
}
