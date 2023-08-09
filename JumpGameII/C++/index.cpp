#include<iostream>
#include<vector>
using namespace std;

int canJump(vector<int>& nums){
    for(int i=1;i<nums.size();i++){
        nums[i] = max(nums[i]+i,nums[i-1]);
    }

    int k=0,jumps=0;
    while(k<nums.size()-1){
        jumps++;
        k = nums[k];
    }

    return jumps;
}

int main(){
    vector<int> nums = {5,1,1,1,6};
    int res = canJump(nums);
    cout << res << endl;
    return 0;
}