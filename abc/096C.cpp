/*C - Grid Repainting 2*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int H, W;
    cin >> H >> W;
    //周りを'.'で囲んで範囲外アクセスを消す
    //↑2次元配列の(1,1)~(H,W)までに格納すれば綺麗だった。
    vector<vector<char>> S(H+2, vector<char>(W+2));
    for(int i = 0; i < H+2; i++){
        for(int j = 0; j < W+2; j++){
            if(i == 0 || i == H+1 || j == 0 || j == W+1){
                S.at(i).at(j) = '.';
            }
            
        }
    }
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cin >> S.at(i+1).at(j+1);
        }
    }
    

    for(int i = 0; i < H+2; i++){
        for(int j = 0; j < W+2; j++){
            //端の場合分け
            //上下左右に(i,j) == #の時に上下左右に#がなければfalse 
            if(S.at(i).at(j) == '#'){
                if(S.at(i+1).at(j) == '.' && S.at(i).at(j+1) == '.' && S.at(i-1).at(j) == '.' && S.at(i).at(j-1) == '.'){
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}