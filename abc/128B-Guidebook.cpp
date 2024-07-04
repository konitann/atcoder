#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<tuple<string,int,int>> dic(n);
    string s;
    int p;
    int id;
    for(int i = 0; i < n; ++i){
        id = i+1;
        cin >> s >> p;
        dic[i] = make_tuple(s,-1*p,id);
    }
    /*tupleやpairのsortは、sortされる要素以外のsortをカスタマイズできる*/
    //ここで、マイナスsecondに-1をかけるとsecondが降順になる。
    sort(dic.begin(),dic.end());
    
    for(int i = 0; i < n; ++i){
        string a;
        int b,c;
        tie(a,b,c) = dic[i];
        cout << c << endl;
    }
    

}