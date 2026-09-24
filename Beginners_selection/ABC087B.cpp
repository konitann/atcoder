/*ABC087B - Coins*/
/*2つの変数が決まれば残りの変数も決まるO(N^3)→O(N^2)*/
#include <bits/stdc++.h>

using namespace std;

int main(){
    int A,B,C,X;
    cin >> A >> B >> C >> X;
    int ans = 0;

    for(int i = 0; i <= A; i++){
        for(int j = 0; j <= B; j++){
            if((X-(i*500 + j*100))/50 >= 0 && (X-(i*500 + j*100))/50 <= C){
                ans++;
            }
        }
    }
    cout << ans << endl;
} 