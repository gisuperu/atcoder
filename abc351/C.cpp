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
    vector<int> A;
    for(int i = 0; i < N; i++){
        int a;
        cin >> a;
        A.push_back(a);
    }

    deque<int> ray;
    for(int a : A){
        ray.push_back(a);
        int a1, a2;
        while(true){
            if(ray.size() <= 1){
                break;
            }
            a1 = ray.back();
            ray.pop_back();
            a2 = ray.back();
            ray.pop_back();
            if(a1 == a2){
                ray.push_back(a1+1);
            }else{
                ray.push_back(a2);
                ray.push_back(a1);
                break;
            }
        }
    }

    cout << ray.size() << endl;


    return 0;
}

