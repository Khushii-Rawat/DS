#include<iostream>
using namespace std;
#include<vector>

bool possibleSolution(vector <int> arr, int student, int mid){

    int student_count = 1;
    int pageSum = 0;

    int i = 0;

    while(i < arr.size() ){

        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else{
            // pageSum > mid
            student_count++;
            if(student_count > student && arr[i] > mid){
                return false;
            }

            pageSum = 0;
            pageSum += arr[i];
        }

        i++;
    }

    return true;
}

int bookAllocation(vector <int> arr, int student){

    int sum = 0;

    for (int i = 0; i < arr.size() - 1 ; i++)
    {
       sum += arr[i];
    }

    int start = 0;
    int mid = start + (sum - start)/2;
    int ans = -1;

    while (start < sum){

        int i = 0;
        int total_pages = 0;
        
        if(possibleSolution(arr, student, mid)){
            ans = mid;
            sum = mid - 1;
        }
        else{
            start = mid + 1;
        }

        mid = start + (sum-start)/2;
    }

    return ans;
    
}

// each book should b allocated
// each student should get a book
// book allocation should be in a continous way
// allocation should be done in a way such that maximum number of pages assigned to a student are minimum 

// min value -> 0 assuming no book is alloted
// max value -> sum of total number of pages 

int main(){

    return 0;
}