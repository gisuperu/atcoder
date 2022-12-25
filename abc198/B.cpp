#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    while(n != 0 && n%10 == 0)n /= 10;
    
    string str = to_string(n);
    bool f = true;
    for(int i = 0; i < str.size()/2; i++){
        if(str.at(i) != str.at(str.size() -1 -i))f = false;
    }

    if(f) cout << "Yes" << endl;
    else cout << "No" << endl;
}