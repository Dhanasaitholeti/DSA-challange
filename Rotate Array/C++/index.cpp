#include<iostream>
#include<vector>
using namespace std;

void RotateArray(vector<int>& nums,int k){
    int n = nums.size();
    int val = k%n;
    (val>=0)? k=val : k=k;
    int temp;
    int i = 0;
    while(i<k){
        temp = nums[n-1];
        for(int j=n-1;j > 0;j--){
                nums[j] = nums[j-1];
        }
        nums[0] = temp;
        i++;
    }
}

int main(){
   vector<int> nums = {1,2,3,4,5,6,7};
    RotateArray(nums,8);
    for(int i:nums) cout << i << " ";
    return 0;
}