#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n);i++)
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    rep(i,n)cin >> vec[i];
    sort(vec.begin(), vec.end()); 
    int ans = 0;
    rep(i,n){
        if(i == 0){
            ans++;
            continue;
        }
        if(vec[i-1] < vec[i])ans++;
    }
    cout << ans << endl;
}