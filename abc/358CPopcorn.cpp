#include <bits/stdc++.h>




//転置すればよいのでは
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<string> s(n);
    for(int i = 0; i < n; i++)cin >> s[i];

    vector<int> rest;
    int ans =0;
    for(int i = 0; i < m; i++){
        int x_count = 0;
        for(int j = 0; j  < n; j++){
            if(s[j][i] == 'x'){
                x_count++;
            }
        }
        if(x_count == n-1){
            //cout << "i_if" << i << " ";
            //cout << ans << endl;
            ans++;
        }
        else{
            //cout << "i:else " << i << " ";
            //cout << ans << endl;
            rest.push_back(i);
        }
    }
    //cout << "ans_result" << ans << endl;
    int rest_length = rest.size();
    //cout << "rest_length:" << rest_length << endl;
    for(int i = 0; i < rest_length; i++){
        cout << rest[i] << " " ;
    }
    cout << endl;
    int i = 0;
    std::cout << ans << endl;//coutがあいまいと言われたので、つけた
}