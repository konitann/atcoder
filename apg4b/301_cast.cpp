#include <bits/stdc++.h>
using namespace std;
int main(){
    cout << 3.14159265358979 << endl;
    cout << fixed << setprecision(10);//doubleの長さ指定
    cout << 3.14159265358979 << endl;

    //数値型から文字列に変換
    int num = 100;
    string s = to_string(num);
    cout << s + "yen"<<endl;
    //文字列からint型に変換...stoi
    //文字列からdouble型は...stod
    string t = "100";
    int n = stoi(t);
    cout << n-1 << endl;
}