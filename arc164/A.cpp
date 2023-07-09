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

    int T;
    cin >> T;
    
    for(int _ = 0; _ < T; _++){
        long long n, k;
        cin >> n >> k;
        long long min = 0;
        long long max = n;
        while(n > 0){
            min += n%3;
            n /= 3;
        }
        // cout << "min: " << min << endl;
        // cout << "max: " << max << endl;
        if(min <= k && k <= max && (k-min)%2 == 0){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }

    return 0;
}

