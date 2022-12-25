#include <bits/stdc++.h>
using namespace std;

int main(){
    unsigned long n;
    cin >> n;

    int i = 0;
    while(n > 0){
        // cerr << i << endl;
        n = n >> 1ull;
        i++;
    }

    cout << i-1 << endl;
}
