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
    vector<int> A(N, 0);
    map<int, int> pos;
    for(int i = 1; i <= N; i++){
        int a;
        cin >> a;

        A[i] = a;
        pos[a] = i;
    }

    string steps = "";
    for(int i = 1; i <= N; i++){
        steps += format("{0} {1}\n", i, pos[i]);
    }




    
    return 0;
}

