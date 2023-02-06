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

void finish(){
    cout << "No" << endl;
}

int main(){
    //小数の桁数の出力指定
    //cout<<fixed<<setprecision(10);
    //入力の高速化用のコード
    //ios::sync_with_stdio(false);
    //cin.tie(nullptr);
    int N,M;
    cin >> N >> M;
    if(N != M+1){
        finish();
        return 0;
    }

    vector<int> node;
    vector<set<int> > link(N);
    for(int i = 0; i < N; i++){
        node.pb(0);
    }
    for(int i = 0; i < M; i++){
        int u,v;
        cin >> u >> v;
        node[u-1]++;
        node[v-1]++;
        link[u-1].insert(v-1);
        link[v-1].insert(u-1);
    }

    //パスグラフが含まれているかの判定
    //連続グラフかの判定
    //二つの判定をする

    int ends = 0;
    int endnode;
    for(int i = 0; i < N; i++){
        int nd = node[i];
        // cerr << nd << endl;
        if(nd == 1){
            ends++;
            endnode = i;
        }else if(nd != 2) {
            finish();
            return 0;
        }
    }

    if(ends == 2){
        int nextnode,nownode = endnode;
        for(int i = 0; i < N-1; i++){
            nextnode = *(link[nownode].begin());
            if(link[nownode].empty()){
                finish();
                return 0;
            }else{
                link[nextnode].erase(nownode);
                link[nownode].erase(nextnode);
                nownode = nextnode;
            }
        }
        cout << "Yes" << endl;
    }else{
        finish();
    }



    return 0;
}

