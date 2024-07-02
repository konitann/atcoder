#include <bits/stdc++.h>
using namespace std;

/*pairは2つの値の組を表す。*/
void pair_module(){
    cout << "pair" << endl;
    pair<string,int> p("abc",3);    //宣言
    cout << p.first << endl;        //abc

    p.first = "hello";              //代入
    cout << p.first << endl;
    cout << p.second << endl;

    p = make_pair("*",1);           //代入

    string s;
    int a = 0;
    tie(s,a) = p;                   //分解
    cout << p.second << endl;
}

void pair_vector_module(){
    cout << "pair_vector" << endl;
    vector<pair<string,int>> vec = {        //宣言
    {"Alice",30},
    {"Bob",25},
    {"Charlie",20}
    };

    vec.push_back(make_pair("David",40));   //代入
    
    cout << "sinmply output" << endl;
    for(const auto& i: vec){                //単純な出力
        cout << "name: " << i.first << ",Age: " << i.second << endl;
    }

    cout << "i.first.length" << endl;
    for(const auto& i: vec){
        cout << i.first.length() << endl;   //firstの文字の長さ
    }

    cout << "after tie" << endl;

    for(const auto& j:vec){
        string name;
        int age;
        tie(name,age) = j;
        cout << "Name: " << name << ",Age: " << age << endl;
    } 
}

/*tuple型は複数個の値の組を表す。*/
void tuple_module(){
    cout << "tuple_module" << endl;
    tuple<int, string, bool> data(1, "hello", true);    //宣言

    get<2>(data) = false;   //代入
    //注意get<i>としてfor文を回すと、変数を用いることができないのでコンパイルエラーになる。
    cout << get<1>(data) << endl;//出力

    data = make_tuple(2,"world",true);  //代入

    int a;
    string s;
    bool f;
    tie(a,s,f) = data;
    cout << a << " " << s << " " << f << endl;  // 2 WORLD 1
}
void auto_module(){     //型の省略
    vector<int> c = {1,2,3};
    auto d = c; //copy
    
    for(auto nanndemoka : d){
        cout << nanndemoka << endl;
    }

}
int main(){
    pair_module();
    pair_vector_module();
    tuple_module();
    auto_module();

}