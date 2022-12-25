#include <bits/stdc++.h>
using namespace std;

//実装重過ぎて力尽きた・・・

vector<pair<int, int> > direction = {
    make_pair( 1, 0),
    make_pair( 1, 1),
    make_pair( 0, 1),
    make_pair(-1, 1),
    make_pair(-1, 0),
    make_pair(-1,-1),
    make_pair( 0,-1),
    make_pair( 1,-1)
};


int main(){
    int n;
    cin >> n;

    vector<vector<int> > A(n, vector<int>(n));
    int max = 0;
    vector<pair<int, int> > maxIdx;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            int a;
            cin >> a;
            A.at(i).at(j) = a;
            
            if(a > max){
                maxIdx.clear();
                max = a;
                maxIdx.push_back(make_pair(i, j))
            }else if(a == max){
                maxIdx.push_back(make_pair(i, j))
            }
        }
    }

    pair<int, int> ansIdx = maxIdx.at(0);
    pair<int, int> ansDrc = make_pair(1, 0);

    for(int i = 0; i < n; i++){
        int mx = A[(ansIdx.first + ansDrc.first*i + n)%n][(ansIdx.second + ansDrc.second*i + n)%n]
        for(auto P : maxIdx){
            for(auto D : direction){

            }
        }
    }
    




}