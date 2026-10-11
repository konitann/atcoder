#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    string S;
    cin >> N >> S;

    int res = 0;
    int tmp = 0;
    bool flag = true;
    for(int i = 0; i < N; i++){
        if(S.at(i) == 'R')tmp++;
        if(S.at(i) == 'S'){
            res = max(res,tmp);
            tmp = 0;
            flag = false;
        }
    }
    if(!(flag)){
        res = max(res, tmp);//Rが最後で終わる場合を見落としていた
        cout << res << endl;
    }
    else cout << N << endl;
}
