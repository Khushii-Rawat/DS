#include<iostream>
using namespace std;
#include<vector>


vector <int> sort01 (vector <int> &arr){

    int i = 0; int j = arr.size() - 1;

    while(i <= j){

        if (arr[i] == 0){
            i++;
        }
        if (arr[j] == 1){
            j--;
        }

        if (arr[i] == 1 && arr[j]==0){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    return arr;

}



int main(){

    vector <int> arr = {1,1,0,1,0,1};
    vector <int> ans = sort01(arr);

    for ( auto i : ans)
    {
       cout << i << " " ;
    }
    

    return 0;
}