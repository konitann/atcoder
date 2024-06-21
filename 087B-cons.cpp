#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i <= (int)n; i++)
using namespace std;
int main(){
    int a,b,c,x;
    cin >> a >> b >> c >> x;
    int res = 0;
    rep(i,a){
        rep(j,b){
            rep(k,c){
                if(x - (500*i + 100*j + 50*k) == 0){
                    res++;
                    //cout << "res: " << "i:" << i << " j:" << j << " k:" << k << endl;
                }
            }
        }
    }
    cout << res << endl;
}