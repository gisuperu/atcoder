#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    bool a[n];
    for(int i = 0; i < n; i++){
        a[i] = false;
    }
    for(int i = 0; i < n; i++){
        int num;
        cin >> num;
        a[num-1] = true;
    }
    bool f = false;
    for(int i = 0; i < n; i++){
        if(!a[i]){
            f = true;
            break;
        }
    }
    if(!f) {
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}