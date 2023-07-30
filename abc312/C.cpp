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
    vector<int> A(N);
    vector<int> B(M);
    for(int &a : A){
        cin >> a;
    }
    for(int &b : B){
        cin >> b;
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    // for(int a : A){
    //     cout << a << " ";
    // }
    // cout << endl;
    // for(int b : B){
    //     cout << b << " ";
    // }
    // cout << endl;

    int threshold = A[0];
    int idxA=0, idxB=0;
    while(idxB < M && B[idxB] < threshold)idxB++;
    // cout << idxA << ", " << idxB << ", " << threshold << endl;

    while(idxA < N && idxB < M && idxA < M - 1 - idxB){
        if(A[idxA+1] <= B[idxB+1]){
            idxA++;
            threshold = A[idxA];
            while(idxB < M && B[idxB] < threshold)idxB++;
        }else{
            idxB++;
            threshold = B[idxB]+1;
            while(idxA < N && A[idxA] < threshold)idxA++;
        }
        // cout << idxA << ", " << idxB << ", " << threshold << endl;
    }

    if(idxB >= M){
        cout << B[M-1]+1 << endl;
    }else if(idxA < M - 1 - idxB){
        return 0;
    }else{
        cout << threshold << endl;
    }

    return 0;
}

