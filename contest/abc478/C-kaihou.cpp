/*差分比較をする問題に読み解いて落とし込む*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    /*入力*/
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for(int i = 0; i < N; i++)cin >> A.at(i);

    /*前処理*/
    vector<int> X = A;
    sort(X.begin(),X.end());

    int diff_min = 0;
    for(int i = 0; i < N; i++){
        if(A.at(i) != X.at(i)){
            diff_min = i;
            break;
        }
    }
    int diff_max = 0;
    for(int i = N-1; i >= 0; i--){
        if(A.at(i) != X.at(i)){
            diff_max = i;
            break;
        }
    }
    
    int diff = diff_max - diff_min + 1;
    if(K < diff){
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
}