#include<iostream>
using namespace std;

// n-1 elemens are present and any one element is duplicate

int duplicate(int arr[], int size){
    
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = (ans ^arr[i]) ;
    }
    
    for (int i = 1; i < size; i++)
    {
        ans  = ans^ i;
    }


    return ans;
}

int main(){

    int arr[5] = {1,2,3,4,3};
    int size = 5;
    cout << duplicate(arr, size);
    
    return 0;
}