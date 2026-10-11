#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, W;
    cin >> N >> W;
    vector<int> A(N),B(N);
    for(int i = 0; i < N; i++)cin >> A.at(i) >> B.at(i);

    /*
    方針：bit演算で考えられる場合を列挙する1 < N < 20だから大丈夫
    */

    int res = 0;
    for(int i = 0; i < (1 << N); i++){
        bitset<20> b(i);
        
        int weight = 0;
        int happiness = 0;
        
        for(int j = 0; j < N; j++){
            if(b.test(j) == 1){
                weight += B.at(j);
                happiness += A.at(j);
            }
        }
        if(weight <= W){
            res = max(res, happiness);
        }
    }
    cout << res << endl;
}