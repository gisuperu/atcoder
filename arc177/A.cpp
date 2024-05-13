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

    int A, B, C, D, E, F, N;
    cin >> A >> B >> C >> D >> E >> F >> N;
    vector<int> X(N);
    for(int i = 0; i < N; i++){
        cin >> X[i];
    }

    vector<int> cash = {F, E, D, C, B, A};
    vector<int> weight = {500, 100, 50, 10, 5, 1};

    for(int x : X){
        for(int k = 0; k < 6; k++){
            int coins = x/weight[k];
            coins = min(coins, cash[k]);
            x -= weight[k]*coins;
            cash[k] -= coins;
            // cerr << coins << " ";
        }
        // cerr << endl;
        if(x != 0){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}

