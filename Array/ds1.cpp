#include<iostream>
using namespace std;

#include<algorithm>

int main(){
    
    int arr[5];

    std::fill(arr, arr+5, 10);

    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    return 0;
}