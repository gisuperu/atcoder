#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(a == 0 || b == 0){
        return 0;
    }
    int k = a%b;
    if(k == 0) return b;
    else return gcd(b, k);
}

double jozan(int a, int b){
    // cerr << "jozan" << endl;
    int k = gcd(a, b);
    // cerr << "gcd : " << k << endl;
    if(a == 0 || b == 0 || k == 0)return 0;
    return (double)(a/k)/(double)(b/k);
}

int main(){
    int n;
    cin >> n;
    vector<pair<int,int> > point;

    for(int i = 0; i < n; i++){
        int x,y;
        cin >> x >> y;
        point.push_back(make_pair(x, y));
    }
    sort(point.begin(), point.end());

    // cerr << "hoge" << endl;

    vector<vector<int> > triangle;
    int tri = 0;
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            for(int k = j+1; k < n; k++){
                vector<int> v;
                v.push_back(i);
                v.push_back(j);
                v.push_back(k);
                triangle.push_back(v);
                
                tri++;
            }
        }
    }
    // cerr << tri << endl;

    int lng = tri;
    for(int i = 0; i < lng; i++){
        pair<int, int> p1 = point[triangle[i][0]];
        pair<int, int> p2 = point[triangle[i][1]];
        pair<int, int> p3 = point[triangle[i][2]];

        // cerr << p1.first << p1.second << endl;

        double a12 = jozan(p2.second - p1.second, p2.first - p1.first);
        double a13 = jozan(p3.second - p1.second, p3.first - p1.first);
        // cerr << a12 << " " << a13 << endl;
        if(a12 == a13){
            // cerr << "decri" << endl;
            tri--;
        }
    }
    // cerr << "hoge" << endl;

    cout << tri << endl;
}

