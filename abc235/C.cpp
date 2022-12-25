#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;

    map<int, vector<int> > a;

    for(int i = 1; i <= n; i++){
        int aa;
        cin >> aa;
        auto itr = a.find(aa);
        if(itr != a.end()){
            // cerr << "hoge" << i << endl;
            a[aa].push_back(i);
        }else{
            vector<int> v(1, i);
            a[aa] = v;
            // a[aa].push_back(i);
        }
    }


    for(int i = 0; i < q; i++){
        int x, k;
        cin >> x >> k;

        // auto itr = ;
        if(a.find(x) != a.end() && a[x].size() >= k){
            // cerr << a[x].size();
            cout << a[x][k-1] << endl;
        }else{
            cout << -1 << endl;
        }
    }
}