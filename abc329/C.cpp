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

    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    vector<int> alphaMax(alphabet.length(), 0);

    int N;
    string S;
    cin >> N >> S;
    
    char current = S[0];
    int length = 0;
    for(char s : S){
        if(s == current){
            length++;
        }else{
            if(length > alphaMax[current - 'a']){
                alphaMax[current - 'a'] = length;
            }
            length = 1;
            current = s;
        }
    }
    if(length > alphaMax[current - 'a']){
        alphaMax[current - 'a'] = length;
    }

    int sum = 0;
    for(int alpham : alphaMax){
        sum += alpham;
    }
    cout << sum << endl;

    return 0;
}

