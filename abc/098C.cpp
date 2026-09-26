/*C - Attention*/
/*データの累積和を前処理しておく*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    string S;
    cin >> N >> S;

    int ans = INT_MAX, cnt = 0;
    for(int i = 0; i < N; i++){
        cnt = 0;
        for(int j = 0; j < N; j++){
            if(i > j && S.at(j) == 'W'){
                cnt++;
            }
            else if ( i < j && S.at(j) == 'E'){
                cnt++;
            }
        }
        ans = min(ans,cnt);
    }
    cout << ans << endl;
}
