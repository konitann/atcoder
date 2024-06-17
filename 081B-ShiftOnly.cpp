#include <iostream>
#include <vector>
using namespace std;
int div(vector<int> vec){
    for(int i = 0; i < n; i++){
        if(vec[i] % 2 == 0)
    }
    return vec[0] + vec[2];
}
int main(void){
    // Your code here!
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++)cin >> vec[i];
    cout << div(vec) << endl;
}