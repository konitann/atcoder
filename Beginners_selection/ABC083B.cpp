/*ABC083B - Some Sums*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,A,B;
    cin >> N >> A >> B;
    int sum = 0;
    int ans = 0;

    for(int i = 0; i <= N; i++){
        int num = i;
        for(int j = 0; j < 5; j++){//N <=10^4なので5桁の可能性がある
            sum += num%10;
            num /= 10;
        }
        if( A <= sum && sum <= B ){
            ans += i;
        }
        sum = 0;
    }
    cout << ans << endl;
    return 0;
}