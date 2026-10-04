/*ポイントはインデックスをfor文のiにしなくても良いこと*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int N, M;
    cin >> N >> M;
    /*解法1:for文を使って数え上げる*/
    int index = 0;
    vector<int> A(N);//既に0で初期化されている
    /*メモ：vector<int> A(N, -1);で-1で初期化
    */

    for(int i = 0; i < M; i++){
        A.at(index)++;
        index++;
        if(index == N){
            index = 0;
        }
    }
    for(int i = 0; i < N; i++){
        cout << A.at(i) << endl;
    }
    /*解法2:数式を使って直接求める
    int q = M/N;
    int r = M%N;
    for(int i = 0; i < r; i++){
        cout << q + 1 << endl;
    }
    for(int i = 0; i < N-r; i++){
        cout << q << endl;
    }
    */
}