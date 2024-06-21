#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < (int)(n);i++)
using namespace std;
int main(){
    string s;
    cin >> s;
    int n = s.size();
    rep(i,n/5){
        cout << i << endl;
        if(s.find("dreamer")!=string::npos)s.erase(n-7);
        else if(s.find("dream")!=string::npos)s.erase(n-5);
        else if(s.find("eraser")!=string::npos)s.erase(n-7);
        else if(s.find("erase")!=string::npos)s.erase(n-5);
        if(!(s.empty()))break;
        cout << "i:" << i << " s:"<< s << endl;
    }
    cout << s << endl;
}