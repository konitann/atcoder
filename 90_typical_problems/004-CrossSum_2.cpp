/*004 - Cross Sum（★2）*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int H, W;
    cin >> H >> W;
    vector<vector<int>> A(H, vector<int>(W));
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cin >> A.at(i).at(j);
        }
    }

    vector<int> B(H);
    vector<int> C(W);

    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            B.at(i) += A.at(i).at(j);
            C.at(j) += A.at(i).at(j);
        }
    }

    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            cout << B.at(i) + C.at(j) - A.at(i).at(j) ;
            if( j != W-1 )cout << " ";//条件式にしなくても空白は出力して良いらしい
        }
        cout << endl;
    }
    
}