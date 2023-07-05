#include<iostream>
using namespace std;
#include<vector>

vector <int> bubble(vector <int> &arr){

    bool swapped = false;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size() - i  - 1; j++)
        {
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }

        if(swapped == false){
            break;
        }
        
    }

    return arr;
    
}

int main(){

    vector <int> arr = {10,1,7,6,5,14};
    vector <int> ans = bubble(arr);

    for(auto i : ans){
        cout << i << " ";
    }

    return 0;
}

// It sort the largest element first 
// In first round largest elements gets sorted first

// first round for j -> 0 to (n-1)
// second round for j -> 0 to (n-2)
// third round for j -> 0 to (n-3)
// fourth round for j -> 0 to (n-4)
// so if we replace j < arr.size()-1 with j < n-i then it will work
// what is in place sort 