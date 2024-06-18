#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 1; i <= (int)(n); i++)
int main(){
    int n,a,b;
    cin >> n >> a >> b;
    int sum;
    int ans =0;
    rep(i,n){
        sum = i%10 + i%100/10 + i%1000/100 + i%10000/1000 + i%100000/10000;
        if(a <= sum && sum <= b){
            ans += i;
            //cout << "i:" << i << "sum:" << sum << "a:" << a << "b:" << b << endl;
        }
    }
    cout << ans << endl;
}