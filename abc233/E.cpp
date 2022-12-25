#include <bits/stdc++.h>
using namespace std;

int ctoi(char c){
    switch(c){
        case '0':return 0;
        case '1':return 1;
        case '2':return 2;
        case '3':return 3;
        case '4':return 4;
        case '5':return 5;
        case '6':return 6;
        case '7':return 7;
        case '8':return 8;
        case '9':return 9;
        default: return 0;
    }
}
char itoc(int i){
    switch(i){
        case 0:return '0';
        case 1:return '1';
        case 2:return '2';
        case 3:return '3';
        case 4:return '4';
        case 5:return '5';
        case 6:return '6';
        case 7:return '7';
        case 8:return '8';
        case 9:return '9';
        default: return '0';
    }
}

int main(){
    string x;
    cin >> x;

    vector<int> n(x.length());
    int s = 0;
    for(int i = 0; i < x.length(); i++){
        s += ctoi(x[i]);
        n[i] = s;
    }

    char result[x.length()+1];
    // vector<char> result(x.length()+1]);

    int next = 0;
    for(int i = n.size(); i >= 0; i--){
        result[i+1] = itoc((n[i] + next)%10);
        next = (n[i]+next)/10;
    }
    result[0] = itoc(next);
    // if(next != 0) cerr << "over flow" << endl;

    // string out;
    if(next == 0) cout << string(result+1, x.length()) << endl;
    else cout << string(result, x.length()+1) << endl;



}