#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int amax = n+1;
    int bmax = m+1;
    int cmax = n+m+1;

    vector<int> A(amax);
    vector<int> B(bmax);
    vector<int> C(cmax);
    for(int i=0; i < amax; i++){
        int tmp;
        cin >> tmp;
        A[i] = tmp;
    }
    for(int i=0; i < cmax; i++){
        int tmp;
        cin >> tmp;
        C[i] = tmp;
    }
    reverse(A.begin(), A.end());
    reverse(C.begin(), C.end());

    for(int j=0; j<=m; j++){
        int b = C[j];
        for(int jj=j-1; jj>=0 && j-jj>=0; jj--){
            // cerr << B[jj] << " " << A[j-jj];
            b -= B[jj]*A[j-jj];
        }
        // cerr << endl;
        // cerr << b << endl;
        B[j] = b/A[0];
    }

    reverse(B.begin(), B.end());


    // output
    for(auto b : B){
        cout << b << " ";
    }
    cout << endl;


}