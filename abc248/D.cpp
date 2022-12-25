#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n;
    map<int, vector<int> > amap;
    for(int i=1; i<=n; i++){
        int a;
        cin >> a;
        auto result = amap.insert(make_pair(i, vector<int>tmp{}));
        result.first->second.push_back(a);
    }

    // cin >> q;
    // int l, r, x;
    // for(int query=0; query<q; query++){
    //     cin >> l >> r >> x;
    //     auto itr = amap.equal_range(x);
    //     if(itr.first != amap.end()){
    //         int count = 0;
    //         for(auto it=itr.first; it!=itr.second; it++){
    //             int idx = (*it).second;
    //             if(l <= idx && idx <= r) count++;
    //         }
    //         cout << count << endl;
    //     }else{
    //         cout << 0 << endl;
    //     }
    // }

}
//AC: 15/18, TLE: 3/18
// int main(){
//     int n, q;
//     cin >> n;
//     multimap<int, int> amap;
//     for(int i=1; i<=n; i++){
//         int a;
//         cin >> a;
//         amap.insert(make_pair(a, i));
//     }

//     cin >> q;
//     int l, r, x;
//     for(int query=0; query<q; query++){
//         cin >> l >> r >> x;
//         auto itr = amap.equal_range(x);
//         if(itr.first != amap.end()){
//             int count = 0;
//             for(auto it=itr.first; it!=itr.second; it++){
//                 int idx = (*it).second;
//                 if(l <= idx && idx <= r) count++;
//             }
//             cout << count << endl;
//         }else{
//             cout << 0 << endl;
//         }
//     }

// }