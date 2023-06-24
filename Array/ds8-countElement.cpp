#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void count(int arr[], int size){

    sort(arr, arr+size);

    for (int i = 0; i < size; i++)
    {
        int count = 1;

        while(i < size && arr[i] == arr[i+1]){
            i++;
            count ++;
        }

        cout << arr[i] << " : " << count << endl;
    }

}

int main(){

    int arr[8] = {1,2,1,3,3,3,2,7};
    int size = 8;
    count(arr, size);

    return 0;
}