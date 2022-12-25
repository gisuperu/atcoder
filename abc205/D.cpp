#include <bits/stdc++.h>
using namespace std;

long a[1000000];

long nibu(long right, long left, long k){
    if(right == k) return right;
    else if(left - right == 1){
        return right + 1;
    }else{
        long middle;
        middle = (left - right + 1)/2;
        if(a[middle] - middle >= k){
            return nibu(right, middle, k);
        }else{
            return nibu(middle, left, k);
        }
    }
}
int main(){
    int n, q;
    // long a[n];
    cin >> n >> q;

    for(int i = 0; i < n; i++){
        long num;
        cin >> num;
        a[i] =  num;
    }

    for(int i = 0; i < q; i++){
        long result, k;
        cin >> k;

        if(k < a[0]) result = k;
        else if(k > a[n-1]) result = k+n;
        else{
            long less = nibu(0, n-1, k);
            result = k + less;
        }
        cout << result << endl;
    }

}

