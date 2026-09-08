#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<pair<int,int>> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i].first >> vec[i].second;
    }
    
    for(int i = 0; i < n; i++){
        int tmp = vec[i].first;
        vec[i].first = vec[i].second;
        vec[i].second = tmp;
    }
    sort(vec.begin(),vec.end());
    
    for(int i = 0; i < n; i++){
        cout << vec[i].second << " " << vec[i].first << endl;
    }
}