/*ソートを行い、
大小関係が両端で成立していてソートされていることを確認する
計算量はN^2logNで、Nの最大値は2*10^5
そのためN^2の時点でTLEする
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, K;
    cin >> N >> K;
    vector<int> A(N+2);
    for(int i = 0; i < N; i++){
        cin >> A.at(i+1);
    }
    
    
    for(int i = 1; i <= N-K+1; i++){//修正：問題文より、iは1~i+K-1までの範囲
        bool flag1 = true;
        bool flag2 = true;
        vector<int> B(K);
        for(int k = 0; k < K; k++){
            B.at(k) = A.at(i+k); //修正：B.at(i) → B.at(k)
        }
        sort(B.begin(),B.end());
        /*
        メモ：部分ソート
        vector<int> B = A;
        sort(B.begin() + i, B.begin() + i + K);
        */

        //修正ソートを反映したtempAを作成する
        vector<int> tempA = A;
        for(int k = 0; k < K; k++){
            tempA.at(i + k) = B.at(k);
        }

        int B_min = B.at(0);
        int B_max = B.at(K-1);
        for(int j = 1; j <= i; j++){
            if(A.at(j) > A.at(j+1)){
                flag1 = false;
            }
        }
        //修正：j+1と比較するため、上限をj <= Nから変更
        for(int j = i + K; j < N; j++){
            if(A.at(j) > A.at(j+1)){
                flag2 = false;
            }
        }
        if(flag1 == true && flag2 == true){
            bool flag = true;
            //条件式を変更
            for(int j = 1; j < N; i++){
                if(A.at(j) > A.at(j+1)){
                    flag = false;
                    break;
                }
            }
            if(flag)cout << "Yes" << endl;
            return 0;
        }
    }
    
    cout << "No" << endl;
}