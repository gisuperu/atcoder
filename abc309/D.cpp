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

    int n1, n2, M;
    cin >> n1 >> n2 >> M;
    vector<pair<int, vector<int> > > graph(n1+n2, mp(-1, vector<int>(0)));
    for(int i = 0; i < M; i++){
        int a, b;
        cin >> a >> b;
        graph[a-1].second.pb(b-1);
        graph[b-1].second.pb(a-1);
    }
    graph[0].first = 0;
    graph[n1+n2-1].first = 1;

    int n1max = 0;
    int n2max = 1;

    deque<int> head;
    //n1の最大パス
    head.push_back(0);
    while(!head.empty()){
        pair<int, vector<int> > here = graph[head.front()];
        int depth = here.first;
        head.pop_front();
        for(int next : here.second){
            if(graph[next].first == -1){
                graph[next].first = depth+1;
                head.push_back(next);
            }
        }
        if(n1max < depth){
            n1max = depth;
        }
    }
    //n2の最大パス
    head.push_back(n1+n2-1);
    while(!head.empty()){
        pair<int, vector<int> > here = graph[head.front()];
        int depth = here.first;
        head.pop_front();
        for(int next : here.second){
            if(graph[next].first == -1){
                graph[next].first = depth+1;
                head.push_back(next);
            }
        }
        if(n2max < depth){
            n2max = depth;
        }
    }

    // for(auto p : graph){
    //     cout << p.first << endl;
    // }

    // cout << n1max << " " <<  n2max << endl;
    cout << n1max + n2max << endl;




    return 0;
}

