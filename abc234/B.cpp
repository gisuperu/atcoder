#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<pair<int, int> > points;

    for(int i=0; i < n; i++){
        int x,y;
        cin >> x >> y;
        points.push_back(pair<int, int>(x, y));
    }

    long double maxD = 0;
    for(int i=0; i < n; i++){
        for(int j=i+1; j < n; j++){
            int dx,dy;
            long double D;
            dx = abs(points[i].first - points[j].first);
            dy = abs(points[i].second - points[j].second);
            D = sqrtl((dx*dx + dy*dy));
            if(maxD < D){
                maxD = D;
            }
        }
    }
    cout << maxD << endl;
}