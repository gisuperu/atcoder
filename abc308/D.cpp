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

void yes() {cout << "Yes" << endl;}
void no() {cout << "No" << endl;}

int main(){
    //小数の桁数の出力指定
    //cout<<fixed<<setprecision(10);
    //入力の高速化用のコード
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);

    int H, W;
    cin >> H >> W;
    vector<string> S;
    for(int i = 0; i < H; i++){
        string s;
        cin >> s;
        S.pb(s);
    }

    string snuke = "snuke";
    deque<pair<pair<int, int>, int> > head;
    vector<vector<bool> > S_never(H, vector<bool>(W, true));
    
    int nh, nw;
    nh = 0;
    nw = 0;
    if(0 <= nh && nh < H && 0 <= nw && nw < W && S_never[nh][nw] && S[nh][nw] == snuke[(0)%5]){
        head.push_back(mp(mp(nh, nw), 0));
    }

    while(!head.empty()){
        pair<pair<int, int>, int> here = head.back();
        pair<int, int> point = here.first;
        int depth = here.second;
        head.pop_back();
        S_never[point.first][point.second] = false;

        if(point.first == H-1 && point.second == W-1){
            yes();
            return 0;
        }

        //追加
        nh = point.first-1;
        nw = point.second;
        if(0 <= nh && nh < H && 0 <= nw && nw < W && S_never[nh][nw] && S[nh][nw] == snuke[(depth+1)%5]){
            head.push_back(mp(mp(nh, nw), depth+1));
        }
        nh = point.first;
        nw = point.second-1;
        if(0 <= nh && nh < H && 0 <= nw && nw < W && S_never[nh][nw] && S[nh][nw] == snuke[(depth+1)%5]){
            head.push_back(mp(mp(nh, nw), depth+1));
        }
        nh = point.first+1;
        nw = point.second;
        if(0 <= nh && nh < H && 0 <= nw && nw < W && S_never[nh][nw] && S[nh][nw] == snuke[(depth+1)%5]){
            head.push_back(mp(mp(nh, nw), depth+1));
        }
        nh = point.first;
        nw = point.second+1;
        if(0 <= nh && nh < H && 0 <= nw && nw < W && S_never[nh][nw] && S[nh][nw] == snuke[(depth+1)%5]){
            head.push_back(mp(mp(nh, nw), depth+1));
        }
    }

    no();

    return 0;
}

