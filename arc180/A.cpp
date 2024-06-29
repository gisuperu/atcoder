#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define cauto const auto&

#define pb push_back
#define mp make_pair

// #define F first
// #define S second

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
    string S;
    cin >> N >> S;

    vector<int> lens;

    int ln = 1;
    char prev = S[0];
    for(int k = 1; k < N; k++){
        if(prev != S[k]){
            ln++;
        }else{
            lens.push_back(ln);
            ln = 1;
        }
        prev = S[k];
    }
    if(ln > 0){
        lens.push_back(ln);
    }

    // for(auto l : lens){
    //     cerr << l << " ";
    // }
    // cerr << endl;

    long pattern = 1;
    for(int l : lens){
        long p = 1 + (l-1)/2;
        if(p < 0){
            continue;
        }
        pattern *= p;
        pattern = pattern % MOD;
    }

    cout << pattern << endl;

    return 0;
}

