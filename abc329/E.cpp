#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define cauto const auto&

#define pb push_back
#define mp make_pair

#define F first
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

    int N, M;
    string S, T;
    cin >> N >> M >> S >> T;

    while(T.length() >= 2 && T[T.length()-1] == T[T.length()]){
        T.pop_back();
    }

    while(T.length() >= 2 && T[0] == T[1]){
        T.erase(1);
    }

    bool can = true;
    bool isOver = true;

    int Ti = 0;
    for(int Si = 0; Si < N; Si++){
        while(S[Si] == T[0]){
            Si++;
        }
    }


    return 0;
}

