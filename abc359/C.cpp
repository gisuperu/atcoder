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

    long long Sx, Sy, Tx, Ty;
    cin >> Sx >> Sy >> Tx >> Ty;

    long long cost;
    long long dx = Tx - Sx;
    long long dy = abs(Ty - Sy);

    // if((Sx+Sy) % 2 == 1 && dx > 0ll){
    //     dx = abs(dx) + 1ll;
    // }else if((Sx+Sy) % 2 == 0 && dx < 0ll){
    //     dx = abs(dx) + 1ll;
    // }else{
    //     dx = abs(dx);
    // }
    if(dx > 0){//end point is right
        if((Sx+Sy) % 2 == 1){
            dx -= -1;
        }
        if((Tx+Ty) % 2 == 0){
            dx += +1;
        }
    }else if(dx < 0){//end point is left
        if((Sx+Sy) % 2 == 0){
            dx -= +1;
        }
        if((Tx+Ty) % 2 == 1){
            dx += -1;
        }
    }
    dx = abs(dx);
    cost = dy + max((dx - (dy+1))/2, 0ll);

    // cerr << "dx: " << dx << endl;
    // cerr << "dy: " << dy << endl;

    cout << cost << endl;
    return 0;
}

