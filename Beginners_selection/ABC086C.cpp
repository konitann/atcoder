/*ABC086C - Traveling*/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<int> time(N);
    vector<pair<int, int>> p(N);
    for(int i = 0; i < N; i ++){
        cin >> time.at(i) >> p.at(i).first >> p.at(i).second;
    }
    /*
    以下のように始点である(0,0)座標を追加するときれいに書ける。
    vector<int> time(N+1);
    vector<pair<int, int>> p(N+1);
    time.at(0) = p.at(0).first = p.at(0).second = 0;
    for(int i = 0; i < N; i ++){
        cin >> time.at(i+1) >> p.at(i+1).first >> p.at(i+1).second;
    }
    */

    for(int i = 0; i < N; i++){
        
        if(i == 0){
            if(time.at(0) < (p.at(0).first + p.at(0).second) || (time.at(0) - (p.at(0).first + p.at(0).second))%2 != 0){
                cout << "No" << endl;
                return 0;
            }
        }
        if(i == N-1)break;

        int distance = abs(p.at(i).first - p.at(i + 1).first)+ abs(p.at(i).second - p.at(i + 1).second);
        int t = time.at(i+1) - time.at(i);
        if(t < distance || (distance - t) % 2 != 0){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    
}