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

    int N;
    cin >> N;
    vector<pair<int, int> > array;
    for(int i = 0; i < N; i++){
        int l, r;
        cin >> l >> r;
        array.push_back(mp(l, 0));
        array.push_back(mp(r, 1));
    }

    sort(array.begin(), array.end());

    // for(auto a : array){
    //     cerr << a.first << " " << a.second << endl;
    // }
    // cerr << endl;

    long share = 0;
    int count = 0;
    for(auto a : array){
        if(a.second == 0){
            count++;
        }else{
            share += --count;
        }
    }

    cout << share << endl;

    return 0;
}

