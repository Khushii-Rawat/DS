#include<iostream>
using namespace std;
#include<vector>

int findPivot(vector <int> arr){

    int start = 0, end = arr.size() - 1;
    int mid = start + (end - start)/2;

    while( start < end){

        if (arr[mid] < arr[0]){
            end = mid;
        }

        else if (arr[mid] >= arr[0]){
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    } 
    return start;
}

// arr[pivot] <= arr[target] <= arr[n-1] if its in second line

int BinarySearch(vector<int> arr, int start, int end, int key){

    int mid = start + (end - start)/2;

    while(start <= end){

        if (arr[mid] == key ){
            return mid;
        }

        else if (arr[mid] < key){
            start = mid + 1;
        }

        else{
            end = mid - 1;
        }

        mid = start + (end- start)/2;
    }

    return -1;

}

int search(vector <int> arr, int key){
    
    int pivot = findPivot(arr);
    int size = arr.size() - 1;

    if(key >= arr[pivot] && key <= arr[size]){
        return BinarySearch(arr, pivot, size, key);
    }
    else {
        return BinarySearch(arr, 0, pivot - 1, key);
    }

}

int main(){

    vector <int> arr = {8, 10, 17, 1, 2, 3};
    cout << search(arr, 2);
    return 0;
}

// for searching an element in an sorted rotated array first find pivot 
// then instead of applying BS on both side, find on which side the element is present 
// arr[pivot] <= arr[target] <= arr[n-1] the element is in second line
// else its in first line
// then apply binary search 
// for first line, start=0 and end=pivot-1
//for second line, start=pivot, end=last-index
