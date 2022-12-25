#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int aNum[n];
    int b[n];
    // bool cNum[n];
    long long sum = 0;
    for(int i = 0; i < n; i++){
        aNum[i] = 0;
        // cNum[i] = true;
    }

    for(int i = 0; i < n; i++){
        int in;
        cin >> in;
        aNum[in-1]++;
    }
    for(int i = 0; i < n; i++){
        int in;
        cin >> in;
        b[i] = in;
    }
    for(int i = 0; i < n; i++){
        int in;
        cin >> in;
        // if(cNum[in-1]){
        sum += aNum[b[in-1]-1];
        // }
        // cNum[in-1] = false;
    }

    // for(int i = 0; i < n; i++){
    //     cout << aNum[i] << " ";
    // }
    cout << sum << endl;
}