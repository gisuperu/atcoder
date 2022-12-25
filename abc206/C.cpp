#include <bits/stdc++.h>
using namespace std;

int main(){
    long n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sort(a, a+n);
    // for(int i=0; i < n; i++)cout << a[i] << " ";
    long num = (n * (n - 1))/2;
    int inx = 0;
    for(int i = 1; i < n; i++){
        if(a[i] == a[i-1]){
            num -= ++inx;
        }
        else inx = 0;
    }
    

    // long num = 0;
    // for(int i = 0; i < n; i++){
    //     for(int j = i + 1; j < n; j++){
    //         if(a[i] != a[j]) num++;
    //     }
    // }
    cout << num << endl;
}