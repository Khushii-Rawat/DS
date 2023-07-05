#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<vector>

bool possible_solution(vector <int> arr, int cows,int mid){

    int cowCount = 1;
    int lastPost = arr[0];

    for (int  i = 0; i < arr.size(); i++)
    {
        if(arr[i] - lastPost >= mid){
            cowCount++;
            if (cowCount == cows){
                return true;
            }
            lastPost = arr[i];
        }
    }

    return false;
    
    
}

int aggressiveCows(vector <int> arr, int cows){
    int start = 0;
    int end = 0;
    int ans = -1;

    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        end = max(end, arr[i]);
    }

    int mid = start + (end - start)/2;

    while(start <= end){

        if(possible_solution(arr, cows, mid)){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }

    return ans;
    
}

int main(){


    return 0;
}

// search space -> 0 to max element 
// if possible -> if dist b/w cows is less than mid than move right 