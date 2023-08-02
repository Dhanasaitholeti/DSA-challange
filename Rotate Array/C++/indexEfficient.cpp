#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int>& nums, int l, int r){
    if(nums.size()<=1) return;
    while(l<r){
        int temp = nums[l];
        nums[l] = nums[r];
        nums[r] = temp; 
        l++;
        r--;
    }
}

void RotateArray(vector<int>& nums,int k){
    int n = nums.size();
    if(k >= n) k=k%n;
    cout << k <<endl;
    reverseArray(nums,0,(n-k)-1);
    reverseArray(nums,n-k,n-1);
    reverseArray(nums,0,n-1);
}

int main(){
   vector<int> nums = {1,2,3,4,5,6,7};
    RotateArray(nums,3);
    for(int i:nums) cout << i << " ";
    return 0;
}