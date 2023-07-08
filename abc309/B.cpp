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

void swp(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){
    //小数の桁数の出力指定
    //cout<<fixed<<setprecision(10);
    //入力の高速化用のコード
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);

    int n;
    cin >> n;
    vector<vector<int> > A(n, vector<int>(n, 0));
    for(int i = 0; i < n; i++){
        string tmp;
        cin >> tmp;
        for(int j = 0; j < n; j++){
            A[i][j] = (int)tmp.at(j) - (int)'0';
        }
    }

    // for(auto a : A){
    //     for(auto tmp : a){
    //         cout << tmp << " ";
    //     }
    //     cout << endl;
    // }
    for(int i = 1; i < n; i++){
        swp(&A[i-1][0], &A[i][0]);
    }
    for(int i = 1; i < n; i++){
        swp(&A[n-1][i-1], &A[n-1][i]);
    }
    for(int i = n-1; i > 0; i--){
        swp(&A[i][n-1], &A[i-1][n-1]);
    }
    for(int i = n-1; i > 1; i--){
        swp(&A[0][i], &A[0][i-1]);
    }

    for(auto a : A){
        for(auto tmp : a){
            cout << tmp;
        }
        cout << endl;
    }

    return 0;
}

