#include<iostream>
#include<vector>
using namespace std;

bool BinarySearch(vector<int>& nums,int l,int h,int target){
    int mid = (l+h)/2;
    if(l>h) return false;
    if(nums[mid] == target) return true;
    else if(nums[mid] > target) BinarySearch(nums,0,mid-1,target);
    else return BinarySearch(nums,mid+1,h,target);

}

bool searchArray(vector<vector<int>>& nums,int  m,int n,int target){

    for(int i=0; i<m;i++){
        if(nums[i][0] <= target && nums[i][n-1] >= target) return BinarySearch(nums[i],0,nums[i].size()-1,target);
    }
    
    return false;
}

int main(){
    vector<vector<int>> matrix = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    searchArray(matrix,3,4,5);
    return 0;
}