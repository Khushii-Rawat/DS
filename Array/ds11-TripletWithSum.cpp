#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void triplet(int arr[], int size, int sum)
{

    sort(arr, arr + size);
    int i = 0;

    for (int i = 0; i < size; i++)
    {
        int start = i + 1;
        int end = size - 1;

        while(start < end){
            if(arr[i] + arr[start] + arr[end] == sum){
                cout << arr[i] << arr[start] << arr[end] << endl;
                break;
            }
            if(arr[i] + arr[start] + arr[end] < sum){
                start++;
            }
            if(arr[i] + arr[start] + arr[end] > sum){
                end --;
            }
        }
    }
}

int main()
{

    int arr[5] = {1, 2, 3, 4, 6};
    int size = 5;
    triplet(arr, size, 6);

    return 0;
}