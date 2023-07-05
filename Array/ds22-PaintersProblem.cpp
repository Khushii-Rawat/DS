#include<iostream>
using namespace std;
#include<vector>

bool possibleSolution(vector <int> arr, int painter, int mid){

   int i = 0;
   int painterCount = 1;
   int workSum = 0;

    while(i < arr.size()){
        if(workSum + arr[i] <= mid){
            workSum += arr[i];
        }
        else{

            // workSum > mid
            painterCount++;
            if (painterCount > painter && arr[i] > mid){
                return false;
            }

            workSum = 0;
            workSum += arr[i];
        }
        i++;
    }
    return true;
}

int painterProblem(vector <int> arr, int painter){

    int end = 0;
    int start = 0, ans = -1;
    int mid = start + (end - start) /2;

    for (int i = 0; i < arr.size(); i++)
    {
        end += arr[i];
    }

    while(start < end){

        if(possibleSolution(arr, painter, mid)){
            ans = mid;
            end = mid - 1;
        }

        else{
            start = mid + 1;
        }

        mid = start + (end - start)/2;

    }
    
    return ans;

}

int main(){

    return 0;
}

// search space is from 0 to sum of array
// if possible solution exist then move to left and store the previous answer
// if arr[i] > mid then bring start at mid + 1
// if number of painter increases while alloating then move start to mid + 1