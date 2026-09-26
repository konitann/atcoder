#include <bits/stdc++.h>
using namespace std;
template<class T>
bool chmin(T& a, T b) {
     if (a > b) {
        a = b;
        return 1;
    }
    return 0;
}

int main(){
    int N;
    string S;
    cin >> N >> S;
    vector<int> E(N),W(N);
    /*累積和を求める前処理*/
    for(int i = 0; i < N; i++){
        if(S[i] == 'E'){
            E.at(i) = 1;
        }
        else{
            W.at(i) = 1;
        }
    }
    //0文字目には既に値が入っているので追加しなくて良い
    for(int i = 1; i < N; i++){
        E.at(i) += E.at(i-1);
        W.at(i) += W.at(i-1);
    }

    int ans = INT_MAX;

    for(int i = 0; i < N; i++){
        int sm = 0; //スコープの終わりでメモリからsmが破棄されるため、毎回新しい変数として宣言される
        if(i)sm += W.at(i);// 0番目がWの場合左側にだれもいない。
        sm += E.at(N-1)- E.at(i);
        chmin(ans,sm);
    }
    cout << ans << endl;
}