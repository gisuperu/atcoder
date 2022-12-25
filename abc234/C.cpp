#include <bits/stdc++.h>
using namespace std;


int main(){
    long k;
    cin >> k;
    string s = "";
    while(k > 0){
        switch(k%2){
            case 0:
                s.push_back('0');
                break;
            case 1:
                s.push_back('2');
                break;
        }
        k /= 2;
    }
    reverse(s.begin(), s.end());
    cout << s << endl;
}