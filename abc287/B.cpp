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
    cin >> N >> M;
    vector<int> S;
    for(int i = 0; i < N; i++){
        int s;
        cin >> s;
        S.pb(s%1000);
    }
    set<int> T;
    for(int i = 0; i < M; i++){
        int t;
        cin >> t;
        T.insert(t);
    }

    int count = 0;
    for(int s : S){
        if(T.find(s) != T.end()){
            count++;
        }
    }
    cout << count << endl;

    return 0;
}

