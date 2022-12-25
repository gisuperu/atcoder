#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int p = 1000000000 + 7;
    cin >> n;

    vector<int> c(n);
    for(int i = 0; i < n; i++){
        cin >> c[i]; 
    }

    sort(c.begin(), c.end());
    long com = 1;
    for(int i = 0; i < n; i++){
        com *= c[i] - i;
        com = com % p;
    }

    cout << com << endl;

}