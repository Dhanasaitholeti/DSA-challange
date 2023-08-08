#include<iostream>
#include<vector>
using namespace std;

int pivot;

int BSfindPivot(vector<int>& nums,int l,int r) {
    int mid = (l+r)/2;
    if (l>=r) return r; 
    if(nums[mid]>nums[r]) return BSfindPivot(nums,mid+1,r);
    else return BSfindPivot(nums,l,mid);    
}

int BinSearch(vector<int>& nums, int l , int r, int target){
     while (l <= r) {
        int mid = l + (r - l) / 2;
        int realmid = (mid + pivot) % nums.size();
        if (nums[realmid] == target) return realmid;
        if (nums[realmid] < target) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

int search(vector<int>& nums,int target) {
    pivot = BSfindPivot(nums,0,nums.size()-1);
    return BinSearch(nums,0,nums.size()-1,target);
}


int main(){
    vector<int> nums ={1,2};
    int target = 1;
    int res = search(nums,target);
    cout << res << endl;
    return 0;
}