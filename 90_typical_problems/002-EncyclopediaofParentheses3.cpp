/*002 - Encyclopedia of Parentheses（★3）*/
/*
知識：正しい括弧列の条件と以下の2点である。
- '('と')'の数が同じである
- 全てのi (1 <= i <= N)について、左からi文字目までの時点で'('の数が')'の数以上である
*/
#include <bits/stdc++.h>
using namespace std;

void solve(int N){
    
    for(int tmp = 0; tmp < (1 << 20); tmp++){
        int cnt = 0;
        bitset<20> b(tmp);
        if(!(b.test(0))){//始めが')'の場合
            continue;
        }
        for(int i = 0; i < N; i++){
            if(b.test(i))cnt++;
            else cnt--;
        }
        if(cnt != 0){//'('と')'の数が合わない場合
            continue;
        }
        cout << b << endl;
        stack<int> s;
        for(int i = 0; i < N; i++){
            if(!(b.test(i))){
                int cnt = 0;
                for(int j = i; j < N; j++){
                    if(b.test(j))cnt = j-i;
                }
                for(int k = 0; k < cnt*2; k++){
                    s.pop();//値を確認せずpopすることが誤り→再帰関数?
                    //正しい括弧列の条件を使う
                }
            }
            else{
                cout << s.top() << endl;
                s.push(1);
            }
        }
        for(int i = 0; i < N; i++){
            s.pop();
        }
        if(s.empty()){
            for(int i = 0; i < N; i++){
                if(b.test(i)){
                    cout << '(';
                }
                else{
                    cout << ')';
                }
            }
        }
    }
}

int main(){
    int N;
    cin >> N;

    if( N % 2 == 1)return 0;

    solve(N);
    return 0;
}