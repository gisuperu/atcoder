#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N, X;
    cin >> N >>X;

    // vector<int> B(N);

    long long mintime = 0;
    long long t = 0;

    for(long long n = 0; n < N && n < X; n++){//常にN<Xとは限らないことに注意
        long long a, b;
        cin >> a >> b;
        // B[n] = b;
        
        t += a + b;
        long long time = t +(X -n-1)*b;
        if(time < mintime || mintime == 0){
            mintime = time;
            // cerr << "n: " << n << endl;
        }
    }
    cout << mintime << endl;
}