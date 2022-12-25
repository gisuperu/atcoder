#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int balls = 0;
    deque<pair<int, int> > status;
    status.push_back(pair<int, int>(0, 0));

    for(int i=0; i < n; i++){
        balls++;
        int a;
        cin >> a;

        if(a == 1){
            balls--;
            cout << balls << endl;
            break;
        }

        // pair<int, int>top = status.back();
        if(a == status.back().first){
            status.back().second++;
            if(status.back().second >= a){
                balls -= a;
                status.pop_back();
            }
        }else{
            status.push_back(pair<int, int>(a, 1));
        }

        cout << balls << endl;
    }
}