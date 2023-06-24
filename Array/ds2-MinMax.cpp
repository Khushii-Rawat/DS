#include<iostream>
using namespace std;

int maximum(int arr[],int size){

    int max = INT_MIN;

    for (int i = 0; i < size; i++)
    {
       if(arr[i] > max){
            max = arr[i];
       }
    }

    return max;
}

int minimum(int arr[], int size){

    int mini = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if(arr[i] < mini){
            mini = arr[i];
        }
    }

    return mini;
}

int main(){

    int arr[5] = {1,2,3,5,4};
    int size = 5;

    cout << minimum(arr, size) << endl;
    cout << maximum(arr, size) << endl;


    return 0;
}