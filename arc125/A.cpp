#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int n, m;
//     cin >> n >> m;
//     const int bin[2] = {false, true};
//     bool A[n];
//     // vector<int> A(n);
//     for(int i = 0; i < n; i++){
//         int  a;
//         cin >> a;
//         A[i] = bin[a]; 
        
//     }
//     bool T[n];
//     // vector<int> T(m);
//     for(int i = 0; i < m; i++){
//         int t;
//         cin >> t;
//         T[i] = bin[t]; 
        
//     }

//     bool ahead = A[0];
//     int next = 0;
//     int left = 1, right = n-1; 
//     while(left <= right){
//         cerr << left << "hoge" << right << endl;
//         bool isA = !(A[left] && ahead);
//         bool isB = !(A[right] && ahead);
//         cerr << isA << isB << endl;
//         if(!(A[left] && ahead) || !(A[right] && ahead)){
//             next = left;
//             break;
//         }
//         left++;
//         right--;
//         cerr << left << "hoge" << right << endl;
//     }
//     cerr << next << " ";
//     long step = 0;
//     bool noshift = true;
//     for(int i = 0; i < m; i++){
//         if(noshift){
//             if(T[i] && ahead){
//                 step++;
//             }else if(next == 0){
//                 step = -1;
//                 break;
//             }else{
//                 step += next + 1;
//                 ahead = !ahead;
//             }
//         }else{
//             if(T[i] && ahead){
//                 step++;
//             }else{
//                 step += 2;
//                 ahead = !ahead;
//             }
//         }
//     }

//     cout << step << endl;

//     // int G[n][] // [max nodes]{0/1, leftDistance, rightDistance}
//     // int Glng = 1;
//     // G[1] = {A[0], 0, 0}
//     // for(int i = 1; i < n; i++){
//     //     int p = i, q = i+1;
//     //     if(q = n) q = 0;

//     //     if(A[p] != A[q]){
//     //         G[Glng] = {A[p], 0, 0}
//     //     }
//     // }

    
// }

int main(){
    int n, m;
    cin >> n >> m;
    int A[n];
    // vector<int> A(n);
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        A[i] = a; 
        
    }
    int T[n];
    // vector<int> T(m);
    for(int i = 0; i < m; i++){
        int t;
        cin >> t;
        T[i] = t; 
        
    }

    int ahead = A[0];
    int next = 0;
    int left = 1, right = n-1; 
    while(left <= right){
        cerr << left << "hoge" << right << endl;
        bool isA = (A[left] == ahead);
        bool isB = (A[right] == ahead);
        cerr << isA << isB << " " << ahead << " " << A[0] << endl;
        if(A[left] != ahead || A[right] != ahead){
            next = left;
            break;
        }
        left++;
        right--;
        cerr << left << "hoge" << right << endl;
    }
    cerr << next << " ";
    const int unbin[2] = {1, 0};
    long step = 0;
    bool noshift = true;
    for(int i = 0; i < m; i++){
        if(noshift){
            if(T[i] == ahead){
                step++;
            }else if(next == 0){
                step = -1;
                break;
            }else{
                step += next + 1;
                ahead = unbin[ahead];
            }
        }else{
            if(T[i] == ahead){
                step++;
            }else{
                step += 2;
                ahead = unbin[ahead];
            }
        }
    }

    cout << step << endl;

    // int G[n][] // [max nodes]{0/1, leftDistance, rightDistance}
    // int Glng = 1;
    // G[1] = {A[0], 0, 0}
    // for(int i = 1; i < n; i++){
    //     int p = i, q = i+1;
    //     if(q = n) q = 0;

    //     if(A[p] != A[q]){
    //         G[Glng] = {A[p], 0, 0}
    //     }
    // }

    
}
