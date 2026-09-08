#include <bits/stdc++.h>
using namespace std;

//i~N-1にNの約数が存在するか
bool is_prime(int N){
    if(N==1)return true;
    for(int i = 2;i*i<=N;i++){
        if(N%i==0)return true;
    }
    return false;
}


int main() {
  int n;
  cin >> n;
  cout << is_prime(n) <<endl;
}

