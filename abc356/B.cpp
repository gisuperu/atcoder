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

    int N, M;
    cin >> N >> M;
    vector<int> A(M), X(M, 0);
    for(int i = 0; i < M; i++){
        cin >> A[i];
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            int x;
            cin >> x;
            X[j] += x;
        }
    }

    bool isWin = true;
    for(int i = 0; i < M; i++){
        if(A[i] > X[i]){
            isWin = false;
        }
    }

    cout << (isWin ? "Yes" : "No") << endl;

    return 0;
}

