#include<iostream>
using namespace std;

int firstOccurance(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;
    int ans = -1;


    while (start <= end){

        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }

        else if (arr[mid] > key){
            end = mid - 1;
        }

        else{
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }

    return ans;
}


int lastOccurance(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;
    int mid = start + (end-start)/2;
    int ans = -1;


    while (start <= end){

        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }

        else if (arr[mid] > key){
            end = mid - 1;
        }

        else{
            start = mid + 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}


pair <int,int> firstAndLastPosition(int arr[], int size, int key){

    int first = firstOccurance(arr, size, key);
    int last = lastOccurance(arr, size, key);

    pair<int, int> ans = make_pair(first, last);
    return ans;

}


int main(){

    int arr[] = {0,1,1,2,2,2};
    int size = 6;

    pair <int, int> ans = firstAndLastPosition(arr, size, 1);

    cout << ans.first << endl;
    cout << ans.second << endl;    


    return 0;
}