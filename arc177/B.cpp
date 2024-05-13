#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define cauto const auto&

#define pb push_back
#define mp make_pair

// #define F first
// #define S second

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
    string S;
    cin >> S;

    int total_push = 0;
    vector<int> push;

    for(int i = 1; i < S.size(); i++){
        if(S[i-1] != S[i]){
            total_push += i;
            push.push_back(i);
        }
    }
    if(S[S.size()-1] == '1'){
        total_push += S.size();
        push.push_back(S.size());
    }

    // for(int p : push){
    //     cerr << p << " ";
    // }
    // cerr << endl;

    cout << total_push << endl;
    for(int i = 0; i < push.size(); i++){
        int time = push[push.size() -1 -i];
        vector<string> action = {"A", "B"};
        for(int k = 0; k < time; k++){
            cout << action[i%2];
        }
    }
    cout << endl;


    return 0;
}

