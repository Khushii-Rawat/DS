#include<iostream>
using namespace std;
#include<vector>

vector <int> selection(vector <int> &arr){

    for (int i = 0; i < arr.size(); i++)
    {
        int miniIndex = i;
        for (int j = i + 1; j < arr.size(); j++)
        {
          if (arr[j] < arr[miniIndex]){
            miniIndex = j;
          }  
        }

        if(miniIndex != i){
            int temp = arr[miniIndex];
            arr[miniIndex] = arr[i];
            arr[i] = temp;
        }

        // swap(arr[miniIndex], arr[i]);
      
    }
    return arr;
    
}

int main(){

    vector <int> arr = {7,0,2,4,1};
    vector <int> ans = selection(arr);

    for (auto i : ans)
    {
       cout << i << " ";
    }
    
    return 0;
}