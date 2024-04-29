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

    vector<pair<int, int> > side = {{0, 1}, {1, 0}, {-1, 0}, {0, -1}};

    int H, W;
    vector<string> S(H);
    for(int i = 0; i < H; i++){
        cin >> S[i];
    }

    //(訪問済か，終点になるかどうか)
    vector<vector<pair<bool, bool> > > map(H, vector<pair<bool, bool> >(W, make_pair(false, false)));
    
    //壁の4近傍を終点にする
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            if(S[i][j] == '#'){
                map[i][j].first = true;
                map[i][j].second = true;
                for(auto sd : side){
                    int ni = i + sd.first;
                    int nj = j + sd.second;
                    if(0 <= ni && ni < H && 0 <= nj < W){
                        map[ni][nj].second = true;
                    }
                }

            }
        }
    }

    deque<tuple<int, int, int> > head;
    // head.push_back(std::make_pair(0,0)); 
    // 始点の設定
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            head.push_back(tuple(i, j, (H*i)+j));
        }
    }
    
    int h, w;
    int max = 1;
    int counter = 0;
    while(!head.empty()){
        tuple<int, int, int> here = head.back();
        head.pop_back();
        //内部処理
        h = get<0>(here);
        w = get<1>(here);

        if(map[h][w].first){
            
        }
    }

    return 0;
}

