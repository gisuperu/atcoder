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
// #define MOD 1000000007
#define MOD 998244353

#define bit(n) (1LL<<(n))
#define SZ(x) ((int)(x).size())

int gcd(int a,int b){return b?gcd(b,a%b):a;}

int main(){
    //小数の桁数の出力指定
    //cout<<fixed<<setprecision(10);
    //入力の高速化用のコード
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);

    long long N, M;
    cin >> N >> M;

    long long weight = 1;
    long long count = 0;

    long long lim = N < M ? N : M;

    for(weight = 1; weight <= lim; weight <<= 1){
        if((M & weight) != 0){
        long long t = (N+1)/weight;
            if(t%2 == 0){
                // is even
                count += (t/2)*weight;
                // cerr << (t/2)*weight << endl;
            }else{
                // is odd
                count += (t/2)*weight;
                count = count % MOD;
                count += (N+1)%weight;
                // cerr << (t/2)*weight << " " << (N+1)%weight << endl;
            }
        }
        count = count % MOD;
        // weight <<= 1;

    }
    // cerr << endl;

    cout << count << endl;

    return 0;
}

