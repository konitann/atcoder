#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n);i++)
/*i += word.size()のようにfor文内で操作するとうまくいかない。
出力を見ると、1つずれている。理由はよくわからないので、わかるまで使用しないようにする。*/
using namespace std;
int main(){
    string s;
    cin >> s;
    vector<string> divide = {"dream","dreamer","erase","eraser"};

    // 後ろから解くかわりにすべての文字列を「左右反転」する
    reverse(s.begin(),s.end());
    rep(i,4)reverse(divide[i].begin(),divide[i].end());

    bool ans = true;
    for (int i = 0; i < s.size();){
        bool can_divide_word = false;// 4 個の文字列たちどれかで divide できるか
        rep(j,4){
            string word = divide[j];
            if(s.substr(i,word.size()) == word){//iからwordの大きさ番目までの単語がwordと同じかどうか
                can_divide_word = true;
                i += word.size();
            }
        }
        if(!can_divide_word){
            ans = false;
            break;
        }
        
    }
    if(ans)cout << "YES" << endl;
    else cout << "NO" << endl;
}