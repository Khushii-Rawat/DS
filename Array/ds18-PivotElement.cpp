#include<iostream>
using namespace std;
#include<vector>

// applied in sorted rotated array
// arr[mid] < arr[0] in first line of pivot graph
// arr[mid] > arr[0] in second line of pivot graph

int pivot(vector <int> arr){

    int start = 0, end = arr.size() - 1;
    int mid = start + (end-start)/2;

    while(start < end){

        if (arr[mid] < arr[0]){
            end = mid;
        }

        else if (arr[mid] >= arr[0]){
            start = mid + 1;
        }

        mid = start + (end-start)/2;
    }

    return start ;
}

int main(){

    vector <int> arr = {8, 10, 17, 1, 2};
    cout << pivot(arr); 
    return 0;
}