#include <bits/stdc++.h>
using namespace std;
template<class T>
bool chmin(T& a, T b) {
     if (a > b) {
        a = b;
        return 1;
    }
    return 0;
}

int N;
string S;

int solve(){
    int allE = 0, allW = 0;
    //EとWの数をカウントする
    //S.size() ← 自然数を表すsize_t型　なのでキャストしている
    for(int i = 0; i < (int)S.size();i++){
        if(S[i] == 'E')++allE;
        else ++allW;
    }

    int res = (int)S.size();
    int curE = 0, curW = 0;
    for(int i = 0; i < (int)S.size(); i++){
        int migiE = allE - curE; //リーダーよりmigiにいるEの数(向きを変える必要ある)
        if(S[i] == 'E')--migiE; //i文字目はリーダーなので'E'の場合でも数えない
        chmin(res, curW + migiE);//i文字目がリーダーの時のcurW + migiEは向きを変えるべき数の総数

        if(S[i] == 'E')++curE;  //向きを変えなくてよいE
        else ++curW;            //向きを変えるべきW
    }
    return res;

}

int main(){
    while(cin >> N >> S){
        cout << solve() << endl;
    }
}