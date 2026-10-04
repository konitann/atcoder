/*
ある条件下での部分的な最大値を組み合わせれば全体の最大値を求めることができる。
そのためO(N^2)で計算することができる。
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int N, V;
    cin >> N >> V;
    vector<int> W(N);
    for(int i = 0; i < N; i++)cin >> W.at(i);
    vector<int> A(V);
    int ans = 0;
    //i < k番目を示す.vは2っつのトッピングの合計価格を示す。
    for(int k = 0; k < N; k++){
        for(int v = 0; v < V; v++){//条件に当てはまるansを更新する
            if(v + k + 1 <= V){//予算が収まるなら(+1はインデックス合わせ)
                ans = max(ans,A.at(v) + W.at(k));
            }
        }
        for(int i = 0; i < k; i++){//条件に当てはまる2つ選んだ時の最大を更新
            int v = i + k + 2;//予算チェック
            if(v < V){
                A.at(v) = max(A.at(v),W.at(i) + W.at(k));
            }
        }
    }

    cout << ans << endl;
}