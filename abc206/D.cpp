#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int num = 0;
    int halfN = n/2;
    int trg[n];
    int trgx = 0;
    for(int i = 0; i < halfN; i++){
        int left = a[i];
        int right = a[n - 1 -i];
        if(left != right){
            trg[trgx] = left;
            trg[trgx +1] = right;
            trgx += 2;
        }
    }
    // cerr << trgx << endl;
    if(trgx == 0) cout << 0 << endl;
    else{
        for(int i = trgx; i < n; i++){
            trg[i] = 0;
        }
        sort(trg, trg + trgx);
        // for(int i = 0; i <= trgx; i++){
        //     cerr << trg[i] << " ";
        // }
        // cerr <<endl;
        num = trgx;
        for(int i = 1; i < trgx; i++){
            if(trg[i] == trg[i -1]) {
                // cerr << "hoge" <<endl;
                num--;
            }
        }
        cout << num/2 << endl;
    }
    
}