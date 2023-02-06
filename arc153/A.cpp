#include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
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

    int n;
    cin >> n;

    int p[] = {0, 0, 0, 0, 0, 1};
    p[5] = 1;

    n--;//changing to 0index
    for(int i = 0; i < 6; i++){
        p[i] += n%10;
        n /= 10;
    }


    cout << p[5] << p[5] << p[4] << p[3] << p[2] << p[2] << p[1] << p[0] << p[1] << endl;

    return 0;
}

