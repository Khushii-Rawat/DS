#include<iostream>
using namespace std;
#include<vector>

vector <int> sort012(vector <int> &arr){
    int low=0 , high=arr.size()-1 , mid=0;

    while (mid <= high){

        if (arr[mid] == 0){
            swap(arr[low], arr[mid]);
            mid++;
            low++;
        }

        else if(arr[mid] == 2){
            swap(arr[mid], arr[high]);
            high --;
        }
        else {
            // arr[mid] == 1
            mid ++;
        }
    }
    return arr;
}


int main(){

    vector<int> arr = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1};
    vector <int> ans = sort012(arr);

    for(auto i : ans){
        cout << i << " ";
    }

    return 0;
}