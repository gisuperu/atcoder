#include <bits/stdc++.h>
using namespace std;

int main(){
    int l, q;
    cin >> l >> q;

    int C[q], X[q];
    for(int i = 0; i < q; i++){
        cin >> C[i] >> X[i];
    }

    int cut[q];
    int cutTime = 0;


    for(int i = 0; i < q; i++){
        
        int c = C[i];
        int x = X[i];
        // int c, x;
        // cin >> c >> x;

        if(c == 1){
            // cerr << "hoge" << endl;
            cut[cutTime++] = x;
            sort(cut, cut+cutTime);
        }else{
            // cerr << "this x: " << x << endl;
            int lngMin = 0;
            int lngMax = l;

            int left = 0;
            int right = cutTime-1;
            while(left <= right){
                int mid = (left + right + 1)/2;
                int spa = cut[mid];
                bool f = (right - mid) <= 1;
                cerr << left << " " << mid << " " << right << endl;
                cerr << lngMax << " " << lngMin << endl;
                if(x < spa){
                    right = mid;
                    lngMax = spa;
                }else{
                    left = mid;
                    lngMin = spa;
                }
                if(f)break;
            }
            cout << lngMax - lngMin << endl;
        }
    }
    
}
