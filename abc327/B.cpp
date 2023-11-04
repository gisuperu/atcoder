#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define cauto const auto&

#define pb push_back
#define mp make_pair

#define F first
#define S second

//定数
#define INF32 2147483647
#define INF64 9223372036854775807
#define MOD 1000000007

#define bit(n) (1LL<<(n))
#define SZ(x) ((int)(x).size())

int gcd(int a,int b){return b?gcd(b,a%b):a;}

int main(){
    //小数の桁数の出力指定
    //cout<<fixed<<setprecision(10);
    //入力の高速化用のコード
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    
    ll B;
    cin >> B;

    vector<ll> pattern = {
        1,
        1,
        4,
        27,
        256,
        3125,
        46656,
        823543,
        16777216,
        387420489,
        10000000000,
        285311670611,
        8916100448256,
        302875106592253,
        11112006825558016,
        437893890380859375
    };

    for(int i = 1; i < pattern.size(); i++){
        if(B == pattern[i]){
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;

    // vector<pair<int, ll> > pattern = vector<pair<int, ll> >();
    // int k = 0;
    // ll kk = 1;
    // ll MAX = 1000000000000000000;
    // for(int i = 0; i < k; i++){
    //     kk *= k;
    // }
    // while(kk < MAX){
    //     pattern.push_back(make_pair(k, kk));
    //     k++;
    //     kk = 1;
    //         for(int i = 0; i < k; i++){
    //         kk *= k;
    //     }
    // }

    // for(auto pat : pattern){
    //     cout << pat.second << "," << endl;
    // }


    // return 0;
}


