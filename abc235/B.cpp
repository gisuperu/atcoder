#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, max=0;
    cin >> n;
    bool f = true;
    for(int i = 0; i < n; i++){
        int h;
        cin >> h;
        if(h > max && f) max = h;
        else f = false;
    }

    cout << max << endl;
}