#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<pair<int, int> > p;
    vector<pair<int, int> > rep;

    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        p.push_back(make_pair(x, y));
        // rep.push_back(make_pair(y, x));
    }
    sort(p.begin(), p.end());
    // sort(rep.begin(), rep.end());

    long long rect = 0;

    for(int i = 0; i < n-3; i++){
        pair<int, int> P1 = p[i];
        int x1 = P1.first;
        int y1 = P1.second;
        for(int j = i+1; j < n-2 ; j++){
            pair<int, int>  P2 = p[j];
            if(x1 == P2.first){
                int y2 = P2.second;
                for(int k = j+1; k < n-1; k++){
                    pair<int, int> P3 = p[k];
                    if(y1 == P3.second){
                        int x2 = P3.first;
                        for(int l = k+1; l < n; l++){
                            pair<int, int> P4 = p[l];
                            if(x2 == P4.first && y2 == P4.second){
                                rect++;
                            }
                        }
                    }
                    // pair<int, int>  REP1 = rep[k];
                    // if(REP1.first == y1){
                    //     int x2 = REP1.second;
                    //     for(int l = 0; l < n; l++){
                    //         pair<int, int>  REP2 = rep[l];
                    //         if(REP2.first == y2 && REP2.second == x2){
                    //             rect++;
                    //         }
                    //     }
                    // }
                }
            }
        }
    }

    cout << rect << endl;
    
}
