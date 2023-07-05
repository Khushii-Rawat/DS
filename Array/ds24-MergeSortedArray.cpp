#include<iostream>
using namespace std;
#include<vector>

vector <int>  MergeSortedArray(vector <int> v1, vector <int> v2){
    int i = 0; int j = 0;
    vector <int> ans;

    while (i < v1.size() && j < v2.size())
    {
       if(v1[i] <= v2[j]){
        ans.push_back(v1[i]);
        i++;
       }

       else if(v2[j] < v1[i]){
        ans.push_back(v2[j]);
        j++;
       }

    }

    while(i < v1.size()){
        ans.push_back(v1[i]);
        i++;
    }

    while(j < v2.size()){
        ans.push_back(v2[j]);
        j++;
    }

    return ans;
    
}

int main(){

    vector <int> v1 = {1,3,5,6,7,10};
    vector <int> v2 = {2,4,5,9};

    vector <int> ans = MergeSortedArray(v1, v2);

    for(auto i : ans){
        cout << i << " ";
    }


    return 0;
}