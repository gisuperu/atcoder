#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;
    long long A[n];
    long long B[n];
    long long D[n];
    long long max = 0, min = 1000000000000000000;
    for(int i = 0; i < n; i++){
        long long a, b;
        cin >> a >> b;
        if(min > a){
            min = a;
        }
        if(max < a){
            max = a;
        }
        A[i] = a;
        D[i] = a;
        B[i] = b;
    }
    sort(D, D+n);
    for(int i = 0; i < n; i++){
        if(D[i] > k){
            break;
        }else{
            for(int j = 0; j < n; j++){
                if(D[i] == A[j]){
                    k += B[j];
                }
            }
        }
    }
    cout << k << endl;
}

// long long getTo(long long dst, long long max){
//     if(max > dst){
//         return yen;
//     }else if{
        
//     }
// }