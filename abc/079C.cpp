/*C - Train Ticket */
/*for文で全てのbitパターンを生成し、1なら+,0なら-を行う。計算はAND演算で行う。*/
/*
tips
string - '0'でint型二変換できる。文字コードが'0'の48個分オフセットしてくれる
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin >> num;
    int D = num % 10;
    num /= 10;
    int C = num % 10;
    num /= 10;
    int B = num % 10;
    num /= 10;
    int A = num;
    
    for(int i = 0; i < 2; i++){
        int sum = 0;
        if(i)B = -B;
        for(int j = 0; j < 2; j++){
            if(j)C = -C;
            for(int k = 0; k < 2; k++){
                if(k)D = -D;
                sum = (A + B + C + D);
                //cout << A << B << C << D << "=" << sum << endl;
                if(sum == 7){
                    cout << A;
                    std::cout << std::showpos;
                    cout << B << C << D << "=7" << endl;
                    return 0;
                }
            }
        }
    }
        
        
    
}