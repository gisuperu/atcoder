#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    // vector<vector<bool> > line(n+1, vector<bool>(x+1, false));
    vector<int> A(n);
    vector<int> B(n);
    for(int i=0; i < n; i++){
        int tmp;
        cin >> tmp;
        A[i] = tmp;
    }
    for(int i=0; i < n; i++){
        int tmp;
        cin >> tmp;
        B[i] = tmp;
    }
    

}