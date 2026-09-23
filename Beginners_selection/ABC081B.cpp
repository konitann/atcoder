/*ABC081B - Shift only*/
/*OR演算で合わせて、下位ビットの0の数を数える*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int bit_sum = 0;
    for(int i = 0; i < n; i++){
        int input;
        cin >> input;
        bit_sum = bit_sum | input;
    }
    bitset<32> bs(bit_sum);
    int ans = 0;
    for(int i = 0; i < 32;i++){
        if(bs.test(i) == 1){
            ans = i;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}