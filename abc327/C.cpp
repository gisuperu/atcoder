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

    vector<vector<int> > A = vector<vector<int> >(9, vector<int>(9));
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            cin >> A[i][j];
        }
    }

    vector<set<int> > row = vector<set<int> >(9, set<int>());
    vector<set<int> > column = vector<set<int> >(9, set<int>());
    vector<vector<set<int> > > mtx = vector<vector<set<int> > >(3, vector<set<int> >(3, set<int>()));

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            row[i].insert(A[i][j]);
            column[j].insert(A[i][j]);
            mtx[i/3][j/3].insert(A[i][j]);
            // cerr << i/3 << "," << j/3 << "|";
        }
        // cerr << endl;
    }

    bool isOk = true;
    for(set<int> r : row){
        // cerr << r.size() << endl;
        if(r.size() != 9){
            isOk = false;
            break;
        }
    }
    // cerr << endl;
    for(set<int> c : column){
        // cerr << c.size() << endl;
        if(c.size() != 9){
            isOk = false;
            break;
        }
    }
    // cerr << endl;
    for(vector<set<int> > mt : mtx){
        for(set<int> m : mt){
            // cerr << m.size() << endl;
            if(m.size() != 9){
                isOk = false;
                break;
            }
        }
    }

    if(isOk){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }



    return 0;
}

