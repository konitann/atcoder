//解法1.2進数にして、msbから数えて最初の0までの数を数える
//解法2.2で割れるところまで割る(再帰関数使用)
#include <iostream>
#include <vector>
using namespace std;
int div(int n, vector<int>& vec);
int main(void){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++)cin >> vec[i];
    cout << div(n, vec) << endl;
}
int div(int n, vector<int>& vec){
    for(int i = 0; i < n; i++)if(vec[i] % 2 != 0)return 0;
    for(int i = 0; i < n; i++)vec[i]/=2;
    return 1 + div(n,vec);
}