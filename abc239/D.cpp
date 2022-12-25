#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int prime[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199};

    bool Twin = true;
    for(int i = a; i <= b; i++){
        for(int j = c; j <= d; j++){
            for(int p : prime){
                if(i+j == p){
                    Twin = false;
                    break;
                }
            }
            if(!Twin) break;
        }
        if(!Twin) break;
    }

    if(Twin) cout << "Takahashi" << endl;
    else cout << "Aoki" << endl;

    // vector<int> prime;
    // for(int i = 2; i < 200; i++){
    //     bool isprime = true;
    //     for(int a : prime){
    //         if(i%a == 0){
    //             isprime = false;
    //             break;
    //         }
    //     }
    //     if(isprime) prime.push_back(i);
    // }

    // for(int a : prime){
    //     cout << "," << a;
    // }

}