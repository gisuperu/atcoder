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

    int N, T;
    cin >> N >> T;
    vector<int> A(T);
    for(int i = 0; i < T; i++){
        cin >> A[i];
    }

    vector<int> row(N), col(N), dgn(2);
    set<int> dgn0, dgn1;
    for(int i = 0; i < N; i++){
        dgn0.insert(i*N + i+1);
        dgn1.insert((i+1)*N - i);
    }

    int counter = 0;
    for(int a : A){
        counter++;
        int r = ++row[(a-1)/N];
        int c = ++col[a%N];

        int d0 = dgn0.find(a) != dgn0.end() ? ++dgn[0] : 0;
        int d1 = dgn1.find(a) != dgn1.end() ? ++dgn[1] : 0;

        if(r >= N || c >= N || d0 >= N || d1 >= N){
            cout << counter << endl;
            return 0;
        }
    }

    cout << "-1" << endl;


    return 0;
}

