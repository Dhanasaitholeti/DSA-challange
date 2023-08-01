#include<iostream>
#include<vector>

using namespace std;

int removeElement(vector<int>& nums , int val){
     vector<int> uniqueelements;
        for(int j:nums){
            if(j!=val) uniqueelements.push_back(j);
        }
        for(int i=0;i<uniqueelements.size();i++) nums[i] = uniqueelements[i];

        return uniqueelements.size();
}


int main(){
    vector<int> nums = {3,2,2,3};
    int val = 3;
    removeElement(nums , val);
    for(int i:nums) cout << i << " ";
    return 0;
}