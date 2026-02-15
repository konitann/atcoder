#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }

    for(int i = 0; i < n-1; i++){
        if(a[i]==a[i+1])cout << "stay"<<endl;
        if(a[i]<a[i+1])cout << "up "<< a[i+1]-a[i] << endl;
        if(a[i]>a[i+1])cout << "down "<<a[i]-a[i+1] << endl;
    }
}