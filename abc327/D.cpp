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
    vector<int> A = vector<int>(M);
    vector<int> B = vector<int>(M);
    for(int i = 0; i < M; i++){
        cin >> A[i];
    }
    for(int i = 0; i < M; i++){
        cin >> B[i];
    }

    //二色彩色可能かの判定を行う

    //グラフ化
    vector<pair<int, set<int> > > Node = vector<pair<int, set<int> > >(N, make_pair(-1, set<int>()));
    for(int i = 0; i < M; i++){
        if(Node[A[i]-1].first == -1){
            Node[A[i]-1].first = 0;
        }
        if(Node[B[i]-1].first == -1){
            Node[B[i]-1].first = 0;
        }

        Node[A[i]-1].second.insert(B[i]-1);
        Node[B[i]-1].second.insert(A[i]-1);
    }

    //仮彩色
    deque<pair<int, int> > head = deque<pair<int, int> >();
    for(int i = 0; i < M; i++){
        head.push_back(make_pair(0, A[i]-1));
    }
    for(int i = 0; i < M; i++){
        head.push_back(make_pair(0, B[i]-1));
    }
    while(!head.empty()){
        pair<int, int> hear = head.back();
        int depth = hear.first;
        int node = hear.second;
        head.pop_back();
        if(Node[node-1].first <= depth){
            Node[node-1].first = depth;
            for(int nxt : Node[node-1].second){
                head.push_back(make_pair(depth+1, nxt));
            }
        }
    }

    //ジャッジ
    bool isOk = true;
    for(int i = 0; i < M; i++){
        if(Node[A[i]-1].first%2 == Node[B[i]-1].first%2){
            isOk = false;
            break;
        }
    }

    if(isOk){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

    return 0;
}

