//quick_sortの実装
#include <iostream>
#include <vector>
using namespace std;

vector<int> quick_sort(vector<int> vec){
    if(vec.size() <= 1){
        return vec;
    }
    int pivot = vec[0];
    vector<int> less,greater;
    for(int i = 1; i < vec.size();i++){
        if(vec[i] <=pivot){
            less.push_back(vec[i]);
        }
        else if (vec[i] > pivot){
            greater.push_back(vec[i]);
        }
    }
    vector<int> sorted_less = quick_sort(less);
    vector<int> sorted_greater = quick_sort(greater);

    vector<int> result;
    result.insert(result.end(), sorted_less.begin(), sorted_less.end());
    result.push_back(pivot);
    result.insert(result.end(), sorted_greater.begin(), sorted_greater.end());

    return result;
}

int main(){
    vector<int> vec(6);
    for(int i = 0; i < 6; i++){
        cin >> vec[i];
    }
    vec = quick_sort(vec);
    cout << vec[3] <<endl;

}