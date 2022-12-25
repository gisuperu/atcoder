#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int day = 1;
    int money = 1;
    while(money < n){
        money += ++day; 
    }
    cout << day << endl;

}