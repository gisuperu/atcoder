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

    int N, M;
    cin >> N >> M;
    vector<tuple<int, int, vector<int> > > graph(N, make_tuple(0, -1, vector<int>({})));

    for(int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b;
        (get<2>(graph[a-1])).push_back(b-1);
        (get<2>(graph[b-1])).push_back(a-1);
    }
    for(int i = 0; i < N; i++){
        int tmp;
        cin >> tmp;
        get<0>(graph[i]) = tmp;
    }

    for(int i = 0; i < graph.size(); i++){
        int color;
        int depth;
        vector<int> next; 
        tie(color, depth, next) = graph[i];

        for(int j = 0; j < next.size(); j++){
            if(get<0>(graph[next[j]]) == color){//色が繋がらない場合
                get<2>(graph[i])[j] = -1;
                get<1>(graph[next[j]]) = 0;
            }
        }
    }

    deque<int> head;
    for(int i = 0; i < N; i++){//逆順に全てのノードを追加
        head.push_front(i);
    }
    get<1>(graph[0]) = 0;
    while(!head.empty()){//深さ優先
        tuple<int, int, vector<int> > here = graph[head.back()];
        int color;
        int depth;
        vector<int> next;
        tie(color, depth, next) = here;
        head.pop_back();


        
        for(int n : next){
            if(get<1>(graph[n]) == -1 || get<1>(graph[n]) == 0){
                get<1>(graph[n]) = depth+1;
                head.push_back(n);
            }else if(get<1>(graph[n]) != depth-1){
                if(depth == 0)continue;
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}

