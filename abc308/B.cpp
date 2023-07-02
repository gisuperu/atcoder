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

    int N,M;
    vector<string> C, D;
    vector<int> P;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        string s;
        cin >> s;
        C.pb(s);
    }
    for(int i = 1; i <= M; i++){
        string s;
        cin >> s;
        D.pb(s);
    }
    for(int i = 0; i <= M; i++){
        int s;
        cin >> s;
        P.pb(s);
    }

    map<string, int> dish;
    for(string s : C){
        dish[s] = P[0];
    }
    for(int i = 1; i <= M; i++){
        dish[D[i-1]] = P[i];
    }

    int sum = 0;
    for(string s : C){
        sum += dish[s];
    }
    cout << sum << endl;

    return 0;
}

