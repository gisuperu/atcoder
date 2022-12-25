#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    // int p[n];
    // for(int i = 0; i < n; i++){
    //     cin >> p[i];
    // }

    int Q[n];
    for(int i = 0; i < n; i++){
        int p;
        cin >> p;
        Q[p-1] = i+1;
    }

    // string ans = to_string(Q[0]);
    // for(int i = 1; i < n; i++){
    //     ans = ans + " " + to_string(Q[i]);
    // }
    // cout << ans << endl;

    cout << Q[0];
    for(int i = 1; i < n; i++){
        cout << " " << Q[i];
    }
    cout << endl;
}
