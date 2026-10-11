#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    /*注意
    C++のintは~10^9までの表現が可能
    制約があるのでlong long intで10^18まで使用できる
    */
    ll N, W;
    cin >> N >> W;
    vector<ll> A(N), B(N);
    for(int i = 0; i < N; i++)cin >> A.at(i) >> B.at(i);

    ll ans = 0;
    for(int i = 0; i < (1 << N); i++){
        ll value = 0, cost = 0;//命名が良い
        for(int j = 0; j < N; j++){
            //bit全探索でもbitsetを使わずに、以下の条件式で数字iのjビット目が1かどうかを判定できる
            if(i >> j & 1){
                value += A.at(j);
                cost += B.at(j);
            }
        }
        if(cost <= W && ans < value)ans = value;
    }
    cout << ans << endl;
}