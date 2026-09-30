/*002 - Encyclopedia of Parentheses（★3）*/
/*
1 <= N <= 20, N∋ℤのような小さい制約の場合は全探索をする
2^20 ≒ 10^6 < 10^8(2second)なので実行可能
*/
#include <bits/stdc++.h>
using namespace std;

int N;
bool checker(string str){
    int cnt = 0;
    for(int i = 0; i < N; i++){
        if(str.at(i) == '('){
            cnt++;
        }
        else{
            cnt--;
        }
        if(cnt < 0)return false;
    }
    if(cnt == 0)return true;
    else return false;
}
int main(){
    cin >> N;
    for(int i = 0; i < (1 << N); i++){
        string Candidate = {};
        for(int j = N-1; j >= 0; j--){
            //メモ：上位ビットから探索することで辞書順に出力することが可能
            if((i & (1 << j)) == 0){
                //メモ：iというbit列の候補に対してj文字目が立っているビット列をAND演算している
                //      つまり、iのjビット目(2^jの位)が0であるための条件
                Candidate += "(";
            }
            else{
                Candidate += ")";
            }
        }
        if(checker(Candidate))cout << Candidate << endl;
    }

}