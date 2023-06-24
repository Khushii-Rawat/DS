#include<iostream>
using namespace std;

bool search(int arr[], int size,int key){

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key){
            return true;
        }
    }
    return false;
    
}


int main()
{

    int arr[5]= {1,5,88,12,3};
    int size = 5;

    int key;
    cin >> key;

    cout << search(arr, size, key) << endl;


    return 0;
}