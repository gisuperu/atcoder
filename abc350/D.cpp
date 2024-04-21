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

    if(M == 0){
        cout << 0 << endl;
        return 0;
    }

    vector<int> perfectGraph;
    int total = 0;
    for(int i = 0; i < N; i++){
        total += i;
        perfectGraph.push_back(total);
        // cout << total << endl;
    }
    

    vector<pair<int, vector<int> > > graph;
    // vector<vector<int> > graph(N, vector(0, 0));
    for(int i = 0; i < N; i++){
        graph.push_back(make_pair(-1, vector<int>(0,0)));
    }

    for(int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b;
        graph[a-1].second.push_back(b-1);
        graph[b-1].second.push_back(a-1);
    }

    deque<pair<int, int> > head;
    for(int i = 0; i < N; i++){
        head.push_back(make_pair(i, i));
    }

    int nodeCnt = 0;
    int nodeLanks = 0;
    int nowColor = 0;

    int counter = 0;
    while(!head.empty()){
        pair<int, int> here = head.front();
        head.pop_front();

        // visited
        if(graph[here.first].first != -1){
            continue;
        }

        // 同じ連結グラフ要素
        if(nowColor == here.second){
            graph[here.first].first = nowColor;
            nodeCnt++;
            nodeLanks += graph[here.first].second.size();
            for(int next : graph[here.first].second){
                head.push_back(make_pair(next, nowColor));
            }
        }else{
            //別の連結グラフ
            counter += perfectGraph[nodeCnt] - nodeLanks/2;
            nodeCnt = 0;
            nodeLanks = 0;
            nowColor = here.second;

            graph[here.first].first = nowColor;
            nodeCnt++;
            nodeLanks += graph[here.first].second.size();
            for(int next : graph[here.first].second){
                head.push_back(make_pair(next, nowColor));
            }
        }
    }
    counter += perfectGraph[nodeCnt] - nodeLanks/2;

    cout << counter << endl;

    return 0;
}

