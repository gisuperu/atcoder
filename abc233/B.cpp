#include <bits/stdc++.h>
using namespace std;

int main(){
    int l, r;
    string s;
    cin >> l >> r >> s;

    string ss = s.substr(l-1, r-l+1);
    reverse(ss.begin(), ss.end());

    s.replace(l-1, r-l+1, ss);

    cout << s << endl;

}
