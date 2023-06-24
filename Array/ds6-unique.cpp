#include<iostream>
using namespace std;

// given that the array has 2m(duplicate) + 1(unique) element

int unique(int arr[], int size){

    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = (sum ^ arr[i]);
    }

    return sum;
}

int main()
{
    int arr[5] = {2,1,2,3,3};
    int size = 5;

    int ans =  unique(arr, size);
    cout << ans;

    return 0;
}