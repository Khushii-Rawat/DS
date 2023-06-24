#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

vector <vector <int>> sum(int arr[], int size, int sum){
    vector <vector<int>> ans;

    for (int i = 0; i < size ; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr[i] + arr[j] == sum){
                vector <int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
        
    }
    sort(ans.begin(), ans.end());
    return ans;
    
}

int main(){


    return 0;
}