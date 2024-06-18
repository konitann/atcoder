#include <bits/stdc++.h>
#include <algorithm>
#define rep(i,n) for(int i = 0; i < (int)(n);i++)
using namespace std;
int main(){
    int n;
    cin >> n;
    int vec[n*3];
    rep(i,n*3)cin >> vec[i];
    long long int sum = 0;
    sort(vec, vec + n*3, greater<int>());
    rep(i,n*2){
        if(i%2 == 1){   //解説見た
            sum += vec[i];
        }
    }
    cout << sum << endl;
}