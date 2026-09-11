#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector<int> A(n);
    for(int i = 0; i < n; i++)cin >> A[i];

    bool ans = false;
    //全ての選び方をbit全探索で調べる
    for(int tmp = 0; tmp < (1 << 20); tmp++){
        bitset<20> s(tmp);//最大20個なので20ビットのビット列として扱う
        
        //ある選び方の時の総和を求める
        int sum = 0;
        for(int i = 0; i < n; i++){
            if(s.test(i)){
                sum += A[i];
            }
        }
        if(sum == k){
            ans = true;
        }
    }
    if(ans){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}