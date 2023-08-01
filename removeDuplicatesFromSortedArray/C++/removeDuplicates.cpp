#include<iostream>
#include<vector>


using namespace std;

int removeDuplicatedFromSortedArray(vector<int>& nums){
    vector<int> orderedvalues;
    for(int i:nums){
        if(orderedvalues.size() < 1 || orderedvalues[orderedvalues.size()-1]!=i){
            orderedvalues.push_back(i);
        }
    }

    for(int j=0;j<orderedvalues.size();j++){
        nums[j] = orderedvalues[j];
    }

    return orderedvalues.size();
}



int main(){
    vector<int> nums = {1,1,2};
    int result = removeDuplicatedFromSortedArray(nums);
    for(int i : nums) cout << i << " ";
    return 0;
}