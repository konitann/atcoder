#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> p(n);
    //注意:a,bを代入してからpair型を作る。
    int a,b;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        p[i] = make_pair(b,a);//pのi番目
    }
    //注意(b,a)の順で、ペアを作ることで、sortしやすくする。
    sort(p.begin(),p.end());
    for(const auto&i:p){
        cout << i.second << " " << i.first << endl;
    }
}