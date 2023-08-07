#include<iostream>
#include<vector>
using namespace std;

bool canJump(vector<int>& nums){
    int target = nums.size()-1;
    for(int ptr=target-1; ptr>=0; ptr--){
        if(nums[ptr]+ptr >= target){
            target = ptr;
        }
    }

    if (target == 0) return true;

    return false;  
}

int main(){
    vector<int> nums =  {2,0,0};
    bool res = canJump(nums);
    cout << res;
    return 0;
}