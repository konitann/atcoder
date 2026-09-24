/*ABC085C - Otoshidama*/
/*for文を減らす*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int N,Y;
    cin >> N >> Y;
    int a = -1, b = -1 , c = -1;

    for(int i = 0; i <= N; i++){
        for(int j = 0; j <= N-i; j++){
            int money = 10000 * i + 5000 * j + 1000 * (N - (i + j));
            if(Y == money){
                a = i;
                b = j;
                c = (N - (i + j));
                /*
                return 0;   //これすればbetter!
                cout << a << " " << b << " " << c << endl;
                */
                
            }    
        }
    }
    cout << a << " " << b << " " << c << endl;
}