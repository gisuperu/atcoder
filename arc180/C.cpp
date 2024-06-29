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
    vector<int> A;
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    set<int>sa;
    long count = 0;
    sa.insert(0);
    for(int i = 0; i < N; i++){
        for(auto s : sa){
            sa.insert(s+A[i]);
        }
        count *= sa.size();
        count = count % MOD;
    }

    cout << count << endl;

    // vector<vector<int> > A_sum(N+1, vector<int>(N,0));
    // for(int i = 0; i < N; i++){
    //     A_sum[0][i] = A[i];
    // }
    // for(int d = 0; d <= N; d++){
    //     for(int i = 0; i < N; i++){
    //         if(i < d){
    //             A_sum[d][i] = A_sum[0][i];
    //         }else{
    //             A_sum[d][i] = A_sum[d][i-d] + A[i];
    //         }
    //     }
    // }

    return 0;
}

