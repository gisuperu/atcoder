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

    vector<pair<int, double> > max;
    for(int i = 0; i < N; i++){
        max.push_back(make_pair(0, 0));
    }

    double d = 0;
    for(int i = 0; i < N; i++){
        for(int j = i+1; j < N; j++){
            d = sqrt(pow(point[i].first-point[j].first, 2) + pow(point[i].second-point[j].second, 2));

            if(d > max[i].second){
                max[i].first = j;
                max[i].second = d;
            }
            if(d > max[j].second){
                max[j].first = i;
                max[j].second = d;
            }
        }
    }

    for(auto p : max){
        cout << p.first+1 << endl;
    }

    return 0;
}

