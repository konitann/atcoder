#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    vector<int> A(n);
    for(int i = 0; i < n; i++)cin >> A[i];
    
    int N = n;
    int count = 0;
    for(int i = 0; i < N; i++){
        count++;
        //cout << "---before---" << endl;
        //cout << "n:" << n << endl;
        //cout << "count:" << count << endl;
        if(i == 0)n = n-k;
        else if(i !=0){
            n = n-(k-1);
        }
        if(n <= 0){
            //cout << "break" << endl;
            break;
        }
        
        //cout << "---after---" << endl;
        //cout << "n:" << n << endl;
        //cout << "count:" << count << endl;
        //cout << "i:" << i << endl;
    }
    cout << count << endl;
}