#include <bits/stdc++.h>
using namespace std;


int main(){
    int n, k;
    cin >> n >> k;
    vector<int> P, altP;
    for(int i=0; i < n;i++){
        int p;
        cin >> p;
        P.push_back(p);
        altP.push_back(p);
    }
        sort(altP.begin(), altP.end());
        int num = altP[0];
        cout << num << endl;
        for(int i=k; i < n; i++){
            int p = P[i];
            if(p > num) num = altP[num];
            cout << num << endl;
        }

    // for(int i=k; i <= n; i++){
    //     sort(P.begin(), P.begin()+i);
    //     cout << P[i-k] << endl;
    // }
}