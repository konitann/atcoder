/*ABC049C - 白昼夢*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    string S;
    cin >> S;
    //charではなくてstringで比較する
    vector<string> str = {"dream", "dreamer", "erase", "eraser"};

    reverse(S.begin(),S.end());
    for(int i = 0; i < 4; i++)reverse(str.at(i).begin(),str.at(i).end());

    for(int i = 0; i < S.size();){//更新式は無くて良い
        bool flag2 = false;
        for(int j = 0; j < 4; j++){
            string d = str.at(j);
            if(S.substr(i,d.size()) == d){
                i += d.size();
                flag2 = true;
            }
        }
        if(!flag2){
            cout << "NO" << endl;
            return 0;
        }
        
    }
    cout << "YES" << endl;
    return 0;

}