#include <bits/stdc++.h>
// #include <iostream>
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

    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        string s;
        cin >> n >> s;
        
        int count = 0;
        int sbs = 0;
        char cur = ' ';
        for(char c : s){
            if(cur == '1' && c == '1')sbs++;
            if(c == '1')count++;

            cur = c;
        }

        if(count%2 == 1){
            cout << "-1" << endl;
        }else if(sbs == 1 && count == 2){
            cout << 2 << endl;
        }else{
            cout << count/2<< endl;
        }
    }

    return 0;
}

