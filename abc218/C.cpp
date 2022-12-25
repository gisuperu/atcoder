#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string baseS[n];
    for(int i = 0; i < n; i++){
        string a;
        cin >> a;
        baseS[i] = a;
    }
    string baseT[n];
    for(int i = 0; i < n; i++){
        string a;
        cin >> a;
        baseT[i] = a;
    }

    int left = 200, right = 0, top = 200, bottom = 0;
    for(int i = 0; i < n; i++){
        string a = baseS[i];
        for(int j = 0; j< n; j++){
            if(a[j] == '#'){
                if(left > j) left = i;
                if(right < j) right = j;
                if(top > i) top = i;
                if(bottom < i) bottom i;
            }
        }
    }
    string S[right - left + 1][bottom - top + 1];
    string Sr[bottom - top + 1][right - left + 1];
    string Srr[right - left + 1][bottom - top + 1];
    string Srrr[bottom - top + 1][right - left + 1];
    for(int i = top; i <= bottom; i++){
        string a = baseS[i];
        for(int j = left; j <= right; j++){
            if(a[j] == '#'){
                if(left > j) left = i;
                if(right < j) right = j;
                if(top > i) top = i;
                if(bottom < i) bottom i;
            }
        }
    }
}
