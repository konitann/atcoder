#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,Q;
    cin >> N >> Q;
    vector<int> L(N-1),R(N-1);
    for(int i = 2; i <= N; i++)cin >> L.at(i);
    for(int j = 1; j < N; j++)cin >> R.at(j);
    vector<int> s_query(Q),t_query(Q);
    for(int i = 0; i < Q; i++){
        cin >> s_query.at(i) >> t_query.at(i);
    }

    /*
    きっとDP使う
    */
   for(int i = 0; i < Q; i++){
    for(int j = 0; j < N; j++){
        //存在する選び方全ての回数(恐らく全て→DPで削減していく問題と予想)
    }
   }
}