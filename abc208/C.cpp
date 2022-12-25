#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long k;
    cin >> n >> k;
    vector<long> a;
    vector< pair<int, int> > ppl;
    for(int i = 0; i < n; i++){
        int r;
        cin >> r;
        a.push_back(0);
        ppl.push_back(make_pair(r, i));
    }

    long all = k/n;
    k = k % n;
    // cerr << all << " " << k << endl;
    sort(ppl.begin(), ppl.end());
    for(int i = 0; i < n; i++){
        if(i < k){
            a[ppl[i].second] = all + 1;
        }else{
            a[ppl[i].second] = all;
        }
    }

    for(int i = 0; i < n; i++){
        cout << a[i] << endl;
    }
}