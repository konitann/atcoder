#include <bits/stdc++.h>
using namespace std;

// s-eの総和を返す
int sum_range(int start,int end) {
  if(start==end)return start;
  int sum = sum_range(start,end-1);
  return sum+end;
}

int main() {
  int a,b;
  cin >> a>>b;
  cout << sum_range(a,b) << endl; // numは10のまま(返り値無いから更新されない)
}

