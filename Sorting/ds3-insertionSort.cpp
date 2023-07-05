#include<iostream>
using namespace std;
#include<vector>

vector <int> insertion(vector <int> arr){

   for (int i = 1; i < arr.size(); i++)
    {
        int temp = arr[i];
        int j = i - 1;

        while(j >= 0){

            if(arr[j] > temp){
                arr[j+1] = arr[j];
                j--;
            }
            else{
                break;
            }
        }

        arr[j + 1] = temp;

    }

   return arr;
   
}

int main(){

    vector <int> arr = {5,1,2,8,0,4};
    vector <int> ans = insertion(arr);

    for(auto i : ans){
        cout << i << " ";
    }

    return 0;
}