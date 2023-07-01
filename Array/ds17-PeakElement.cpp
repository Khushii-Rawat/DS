#include<iostream>
using namespace std;
#include<vector>

// in mountain array there wil be three cases 
// arr[i] < arr[i+1] increasing peak
// arr[i+1] < arr[i] decreasing peak
// arr[i-1] < arr[i] > arr[i+1] peak element

int findPeak(vector <int> arr){

    int start = 0, end = arr.size() - 1;
    int mid = start + (end-start)/2;

    while (start < end){

        if (arr[mid] < arr[mid + 1]){
            start = mid + 1;
        }

        else {
            //(arr[mid] > arr[mid + 1])
            end = mid;
        }

        mid = start + (end-start)/2;
    }

    return start;
    
}

int main(){

    vector <int> arr = {3,4,5,1};
    cout << findPeak(arr);
    return 0;
}