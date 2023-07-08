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

void solve(int a, int b){
    if((a%3 != 0 && a+1 == b) || a+3 == b){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}

int main(){
    //小数の桁数の出力指定
    //cout<<fixed<<setprecision(10);
    //入力の高速化用のコード
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);

    // vector<vector<int> > p = {
    //     {},
    //     {0,0},
    //     {0,1},
    //     {0,2},
    //     {1,0},
    //     {1,1},
    //     {1,2},
    //     {2,0},
    //     {2,1},
    //     {2,2}
    // };

    int a, b;
    cin >> a >> b;
    // if((abs(p[a][0] - p[b][0]) + abs(p[a][1] - p[b][1])) == 1){
    //     cout << "Yes" << endl;
    // }else{
    //     cout << "No" << endl;
    // }

    for(int i = 1; i <= 9; i++){
        for(int j = i+1; j <= 9; j++){
            solve(i, j);
        }
        cout << endl;
    }

    return 0;
}


//WA理由
//左右隣り合う時を判定するだけなのに上下も判定してる
//ちゃんと問題を読もう！()
