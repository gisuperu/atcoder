#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k , a;
    // string s;
    cin >> n >> k >> a;

    int last = (a + k -1)%n;
    if(last <= 0) last += n;
    cout << last << endl;
}
