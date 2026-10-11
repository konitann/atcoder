#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    string S;
    cin >> N >> S;

    int res = 0;
    bool flag = true;
    for(int i = 0; i < N; i++){
        int tmp = 0;
        if(S.at(i) == 'R'){
            tmp++;
            for(int j = i; j < N; j++){
                if(S.at(j) == 'R'){
                    tmp++;
                }else{
                    break;
                }
            }
        }
        res = max(res,tmp);
    }
    if(res != 0)res--;
    cout << res << endl;
}
