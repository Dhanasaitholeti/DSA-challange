#include<iostream>
#include<map>
#include<vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    vector<int> correctOrderValues;
    vector<int> finalvals;
    map<int,int> uniqueElements;
    for(int i:nums){
        if(correctOrderValues.size() < 1 || correctOrderValues[correctOrderValues.size()-1] != i){
                correctOrderValues.push_back(i);
                uniqueElements[i] = 1;
        }
        else{
        if(uniqueElements[i] < 2 ) uniqueElements[i] = uniqueElements[i]+1;            
        }
    }

    for(int i =0 ;i<correctOrderValues.size();i++){
        for(int j=0; j<uniqueElements[correctOrderValues[i]]; j++) finalvals.push_back(correctOrderValues[i]);   
    }

    for(int i = 0; i < finalvals.size(); i++) nums[i] = finalvals[i];

    return finalvals.size();
}

int main(){
    vector<int> nums = {1,1,1,2,2,3};
    removeDuplicates(nums);
    return 0;
}