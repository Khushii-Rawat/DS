#include<iostream>
using namespace std;
#include<vector>

vector <int> reverse(vector <int> &arr){

    int start = 0;
    int end = arr.size()-1;

    while (start <= end){
        swap(arr[start], arr[end]);
        start ++;
        end --;
    }

    return arr;
}

vector <int> AddTwoArray(vector <int> v1, vector<int> v2){

    int i = v1.size() - 1;
    int j = v2.size() - 1;
    int carry;
    int sum;

    vector <int> ans;

    while(i >= 0 && j >=0){

        int val1 = v1[i];
        int val2 = v2[j];

        sum = val1 + val2 + carry;
        carry = sum/10;
        sum = sum % 10;

        ans.push_back(sum);
        i--;
        j--;

    }

    while(i >= 0){

        sum = v1[i] + carry;
        carry = sum/10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;

    }

    while(j >= 0){

        sum = v2[j] + carry;
        carry = sum/10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }

    while(carry){
        sum = v2[j] + carry;
        carry = sum/10;
        sum = sum % 10;
        ans.push_back(sum);
    }
    // first reverse the array and then show it in the ans
    reverse(ans);
    return ans;
}

int main(){

    vector <int> v1 = {9,8,1};
    vector <int> v2 = {7,9,0,9};

    vector <int> ans = AddTwoArray(v1, v2);

    for(auto i : ans){
        cout << i << " ";
    }

    return 0;
}