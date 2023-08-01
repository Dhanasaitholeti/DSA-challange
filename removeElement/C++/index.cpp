#include<iostream>
#include<vector>

using namespace std;

int removeElement(vector<int>& nums , int val){
    int index = 0;
    for(int i=1;i<nums.size();i++){
        if(nums[i] != val){
            nums[index++] = nums[i];
        }
    }
    return index;
}


int main(){
    vector<int> nums = {3,2,2,3};
    int val = 3;
    removeElement(nums , val);
    for(int i:nums) cout << i << " ";
    return 0;
}