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

    int H, W;
    cin >> H >> W;

    string sqmap[H];
    for(int i = 0; i < H; i++){
        cin >> sqmap[i];
    }

    pair<int, int> pivot = mp(0, 0);
    bool isSpin = false;

    int Q;
    cin >> Q;
    for(int q = 0; q < Q; q++){
        int a, b;
        cin >> a >> b;


        // if(isSpin){
        //     if(pivot.first < a){
        //         pivot.first -= a-1;
        //     }else{
        //         pivot.first -= H-a-1;
        //     }
        //     if(pivot.second < b){
        //         pivot.second -= b-1;
        //     }else{
        //         pivot.second -= W-b-1;
        //     }
        // }else{
        //     if(pivot.first < a){
        //         pivot.first += a-1;
        //     }else{
        //         pivot.first += H-a-1;
        //     }
        //     if(pivot.second < b){
        //         pivot.second += b-1;
        //     }else{
        //         pivot.second += W-b-1;
        //     }
        // }

        if(isSpin){
            pivot.first -= a-1;
            pivot.second -= b-1;
        }else{
            pivot.first += a-1;
            pivot.second += b-1;
        }
        
        pivot.first = (H + pivot.first)%H;
        pivot.second = (W + pivot.second)%W;

        // cerr << pivot.first << ", " << pivot.second << endl;

        isSpin = !isSpin;
    }
    
    // cerr << pivot.first << ", " << pivot.second << endl;
    if(isSpin){
        for(int i = 0; i < H; i++){
            for(int j = 0; j < W; j++){
                cout << sqmap[(H + pivot.first - i)%H][(W + pivot.second - j)%W];
            }
            cout << endl;
        }
    }else{
        for(int i = 0; i < H; i++){
            for(int j = 0; j < W; j++){
                cout << sqmap[(pivot.first + i)%H][(pivot.second + j)%W];
            }
            cout << endl;
        }
    }
    


    return 0;
}

