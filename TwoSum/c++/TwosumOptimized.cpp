#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            if(mp.find(target-nums[i]) == mp.end())
                mp[nums[i]] = i;
            else
            return {mp[target-nums[i]],i};         
        }
        return {-1,-1};
}


int main(){
    vector<int> arr = {3,2,4};
    int target = 6;
    vector<int> res = twoSum(arr,target);
    for(int i:res){
        cout << i << " ";
    }
    return 0;
}