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
    vector<int> P(N);
    for(int i = 0; i < N; i++){
        cin >> P[i];
    }

    for(int i = 0; i < N; i++){
        P[i] -= N-1-i;
        // cerr << P[i] << " ";
    }

    vector<int> V(N, 0);
    for(int p : P){
        V[(p+N)%N]++;
    }

    vector<int> K;
    for(int i = 0; i < N; i++){
        int sum = V[i] + V[(i+1)%N] + V[(i-1 + N)%N];
        K.push_back(sum);
    }

    cout << *max_element(K.begin(), K.end()) << endl;

    return 0;
}

