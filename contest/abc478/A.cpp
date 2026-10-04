
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,M;
    cin >> N >> M;
    vector<int> A(N);
    for(int i = 0; i < N; i++){
        A.at(i) = M/N;
    }
    int amari = M % N;
    for(int i = 0; i < amari; i++){
        A.at(i)++;
    }
    for(int i = 0; i < N; i++){
        cout << A.at(i) << endl;
    }
    
}