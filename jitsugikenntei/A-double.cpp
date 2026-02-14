#include <bits/stdc++.h>
using namespace std;
int main(){
    string c;
    cin >> c;
    int len = c.size();
    
    for(int i = 0; i < len;i++){
        if('0' <= c[i] && c[i] <= '9'){
            if(i == len-1){
                cout << stoi(c)*2 << endl;
            }
        }
        else{
            cout << "error" << endl;
            break;
        }
    }

}