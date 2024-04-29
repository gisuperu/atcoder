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
    vector<vector<char> > A(N, vector<char>(N, ' '));
    vector<vector<char> > B(N, vector<char>(N, ' '));
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> A[i][j];
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cin >> B[i][j];
        }
    }


    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(A[i][j] != B[i][j]){
                cout << i+1 << " " << j+1 << endl;
            }
        }
    }

    return 0;
}

