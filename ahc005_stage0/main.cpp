#include <bits/stdc++.h>
using namespace std;


const int INF = INT32_MAX;

struct STATE{

};

void init(STATE& state){

}

void modify (STATE& state){

}

int calc_score(STATE& state){

}

void sa(){
    STATE state;
    init(state);
    double start_temp = ;
    double end_temp = ;
    double start_time;
    gettimeofday(&start_time, NULL);
    double TIME_LIMIT = 2.8;
    while(true){
        double now_time;
        gettimeofday(&now_time, NULL);
        if(now_time - start_time > TIME_LIMIT) break;

        STATE new_state = state;
        modify(new_state);
        int new_score = calc_score(new_score);
        int pre_score = calc_score(state);

        double temp = start_temp + (end_temp - start_temp) * (now_time - start_time) / TIME_LIMIT;

        double prob = exp((new_score - pre_score) / temp);

        if(prob > (rand()%INF/(double)INF){
            state = new_state;
        }
    }
}

int main(){
    int n, x, y;
    cin >> n >> x >> y;
    
}