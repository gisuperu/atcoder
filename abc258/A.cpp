#include <bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin >> k;

    int h = 21 + (int)k/60;
    int m = 0 + (int)k%60;

    printf("%02d:%02d\n", h, m);

    


}