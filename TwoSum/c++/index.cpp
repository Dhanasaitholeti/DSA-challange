#include<iostream>
#include<vector>
using namespace std;

vector<int> solveproblem( vector<int> nums , int tar) {
    int len = nums.size();

    for(int i=0; i<len ; i++){
        for(int j=i+1; j<len; j++){
            if(nums[i]+nums[j] == tar){
                return {i,j};
            }
        }
    }
    return {0,0};
}

int main() {
    vector<int> arr = {3,2,4};
    int target = 7;
    vector<int> sol =  solveproblem(arr,target);
    for(int i : sol){
        cout << i<< " ";
    }
    return 0;
}


