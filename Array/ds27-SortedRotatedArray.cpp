#include<iostream>
using namespace std;
#include<vector>

bool isSortedandRotated(vector <int> arr){

    int count = 0;

    for (int i = 1; i < arr.size(); i++)
    {
        if(arr[i-1] > arr[i]){
            count ++;
        }
    }

    if(arr[arr.size()-1] > arr[0]){
        count ++;
    }

    return count <= 1; // if count is less than 1 or equal to 1 then return true
    // return 0 when all the numbers are same 
    
}

int main(){

    vector <int> arr = {3,4,5,1,2};
    cout << isSortedandRotated(arr);

    return 0;
}