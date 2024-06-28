#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n);i++)
using namespace std;
int main(){
    int n,y;
    cin >> n >> y;
    int a,b,c;
    bool flag = false;
    rep(i,n+1){
        rep(j,n+1){//解説見た。2重ループの要素から、3つ目の数も決まるため、ループを減らせる。
            if(n - i-j < 0)break;
            if(i + j + n-(i + j) == n && y == i*10000 + j*5000 + (n-i-j)*1000){
                a = i;
                b = j;
                c = n-i-j;
                flag = true;
                break;
            }
        if(flag)break;
        }
    }
    if(flag)cout<< a << " " << b << " " << c << endl;
    else cout << "-1 -1 -1" << endl;
}