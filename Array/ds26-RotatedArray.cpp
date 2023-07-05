#include<iostream>
using namespace std;
#include<vector>

vector <int> Rotated(vector <int> arr, int k){

    vector <int> ans(arr.size());
    int n = arr.size();

    for (int i = 0; i < arr.size(); i++)
    {
        ans[(i+k)%n] = arr[i];
    }

    return ans;
    
}

int main(){

    vector <int> arr = {1,2,3,4,5};
    int k = 2;
    vector <int> ans = Rotated(arr, k);

    for(auto i : ans){
        cout << i << " ";
    }

    return 0;
}