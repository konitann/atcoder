#include <bits/stdc++.h>
using namespace std;

bool G[10][10];

int main(){
    int n, m;cin >> n >> m;
    
    for(int i = 0; i < m; i++){
        int a,b;
        cin >> a >> b; --a; --b;
        G[a][b] = G[b][a] = true;
    }
   // 順列
    vector<int> ord(n);
    for (int i = 0; i < n; ++i) ord[i] = i;

    int cnt = 0;
    do{
        /*始点以外で始まったらbreak*/
        if(ord[0] != 0)break;
        bool ok = true;
        for(int i = 0; i + 1 < n ; i++){
            int from = ord[i];
            int to = ord[i+1];
            if(!G[from][to]) ok = false;
        }

        if(ok) ++cnt;
    }while(next_permutation(ord.begin(),ord.end()));
    cout << cnt << endl;



    //a,bから存在する長さmの配列を作る→頭文字が1だけカウント
    
}