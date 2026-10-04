#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,V;
    cin >> N >> V;
    vector<int> W(N+1);
    for(int i = 1; i <= N; i++)cin >> W.at(i);
    int max_hapiness = 0;
    for(int i = 1; i <= N; i++){
        for(int j = i+1; j <= N; j++){
            for(int k = j+1; k <= N; k++){
                if((i + j + k) <= V){
                    //cout << i << j << k << " ";
                    int tmp_hapiness = W.at(i) + W.at(j) + W.at(k);
                    //cout << tmp_hapiness << endl;
                    max_hapiness = max(max_hapiness,tmp_hapiness);
                }
            }
        }
    }
    
    cout << max_hapiness << endl;
}