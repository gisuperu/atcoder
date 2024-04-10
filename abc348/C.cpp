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
    vector<pair<int, int> > point;
    for(int i = 0; i < N; i++){
        int X, Y;
        cin >> X >> Y;
        point.push_back(make_pair(X, Y));
    }

    map<int, int> min;
    for(auto p : point){
        int a = p.first;
        int color = p.second;
        if(min.find(color) == min.end()){
            min[color] = a;
        }
        else if(a < min[color]){
            min[color] = a;
        }
        
    }

    int max = 0;
    for(auto iter = min.begin(); iter != min.end(); iter++){
        if(max < iter->second){
            max = iter->second;
        }
    }

    cout << max << endl;
    

    return 0;
}

