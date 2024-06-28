#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> t(n),x(n),y(n);
    rep(i,n)cin >> t[i] >> x[i] >> y[i];
    bool ans = true;
    rep(i,n){
        if(i == 0){
            if(t[i]%2 != (x[i] + y[i])%2 || t[i] < (x[i] + y[i])){
                ans = false;
                //cout << "pass1:" << t[i] << " " << x[i] << " " << y[i] << endl;
                break;
            }
        }
        else{
            if((t[i]-t[i-1])%2 != abs((x[i] + y[i] - x[i-1]- y[i-1])%2) || (t[i]- t[i-1]) < abs((x[i] + y[i] - x[i-1] - y[i-1])))
            //条件2にabs(絶対値)を付け足した。t秒後に負の方向に進むこともあるため。
                ans = false;
                //cout << "pass2:" << t[i] << " " << x[i] << " " << y[i] << endl;
                break;
        }
    }
    if(ans)cout << "Yes" << endl;
    else cout << "No" << endl;
    //rep(i,n)cout << t[i] << " " << x[i] << " " << y[i] << endl;
}