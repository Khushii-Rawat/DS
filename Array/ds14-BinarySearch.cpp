#include<iostream>
using namespace std;
#include<vector>


int binary_search(vector <int> arr, int key){

    int start=0;
    int end = arr.size() - 1;
    int mid = (start + end)/2;

    while(start <= end){

        if (arr[mid]== key){
            return mid;
        }

        else if (arr[mid] < key){
           start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = (start + end)/2;
    }
    return -1;

};

int main(){

    vector <int> arr = {1,2,3,4,5,70};
    cout << binary_search(arr, 70);

    return 0;
}