#include<iostream>
using namespace std;

void swapAlternate(int arr[], int size){

    int start = 0;

    while (start < size && start+1 < size){
        swap(arr[start], arr[start+1]);
        start += 2;
    }
}

int main()
{
    int arr[5] = {1,2,3,7,8} ;
    int size = 5;

    swapAlternate(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}