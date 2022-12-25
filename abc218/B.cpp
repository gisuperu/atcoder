#include <bits/stdc++.h>
using namespace std;

int main(){
    string a = "abcdefghijklmnopqrstuvwxyz";
    for(int i = 0; i < 26; i++){
        int p;
        cin >> p;
        cout << a[p-1];
    }
    cout << endl;
}
