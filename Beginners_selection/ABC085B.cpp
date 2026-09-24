/*ABC085B - Kagami Mochi*/
/*バケット法により、配列を効率的に使える。重複のある配列はsetやmapが使える*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<int> vec(N);
    for(int i = 0; i < N; i++)cin >> vec.at(i);

    int ans = 0;
    sort(vec.begin(),vec.end());
    for(int i = 0; i < N-1; i++){
        if(!(vec.at(i) == vec.at(i+1)))ans++;
    }
    cout << ans+1 << endl;
}