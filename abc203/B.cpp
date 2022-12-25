#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    int sum = (50 * n * (n + 1) * k) + (n * (k * (k +1))/2);
    cout << sum << endl;
}