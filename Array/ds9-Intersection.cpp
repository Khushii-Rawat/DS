#include<iostream>
#include<vector>
using namespace std;

// Find common elements in two array 
// Both the list are sorted (ascending order)

vector <int> intersection(vector <int> a1, vector <int> a2){
    int i = 0; int j = 0;
    vector <int> ans;

   while(i < a1.size() && j < a2.size()){
    if (a1[i] < a2[j]){
        i++;
    }

    if (a2[j] < a1[i]){
        j++;
    }

    if (a1[i] == a2[j]){
        ans.push_back(a1[i]);
        i++;
        j++;
    }
   }

   return ans;
    
    
};

int main(){

    vector <int> v1 = {1,2,2,2,3,4};
    vector <int> v2 = {2,2,3,3};
    vector <int> ans =  intersection(v1, v2) ;

    for(auto i : ans){
        cout << i << ' ';
    }

    return 0;
}