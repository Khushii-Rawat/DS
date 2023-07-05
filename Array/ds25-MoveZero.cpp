#include<iostream>
using namespace std;
#include<vector>

vector <int> MoveZero(vector <int> &arr){

    int nonZero = 0;
    for (int j = 0; j < arr.size(); j++)
    {
       if(arr[j] != 0){
        swap(arr[nonZero], arr[j]);
        nonZero++;
       }
    }

    return arr;
    
}

int main(){

    vector <int> arr = {1,0,3,0,2,0,0};
    vector <int> ans = MoveZero(arr);

    for(auto i : ans){
        cout << i << " ";
    }

    return 0;
}