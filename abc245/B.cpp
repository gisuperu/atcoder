#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    set<int> A;
    for(int i=0; i < n; i++){
        int a;
        cin >> a;
        A.insert(a);
    }

    int min = 0;
    while(A.count(min) == 1){
        min++;
    }

    cout << min << endl;

}