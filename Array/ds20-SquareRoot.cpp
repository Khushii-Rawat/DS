#include<iostream>
using namespace std;

long long int sqrt(int num){

    int start = 0, end = num;
    long long int  mid = start + (end-start)/2;

    while (start < end){

        long long int square = mid * mid;
        if(square == num){
            return mid;
            break;
        }

        else if (square > num){
            end = mid - 1;
        }

        else{
            start = mid + 1;
        }

        mid = start + (end-start)/2;
    }

    return mid;
}

int main(){

    cout << sqrt(35);
    return 0;
}