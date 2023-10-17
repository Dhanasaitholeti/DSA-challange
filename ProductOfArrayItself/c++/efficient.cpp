#include<iostream>
#include<vector>

using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> output(n);

    output[0]=1;
    for(int i=1;i<n;i++) output[i]= output[i-1]*nums[i-1];

    int right = 1;
    for(int j=n-1;j>=0;j--){
        output[j] *= right;
        right *= nums[j];
    }
 
    return output;
}

int main(){
    vector<int> nums={1,2,3,4};
    vector<int> result = productExceptSelf(nums);
    for(int k:result) cout << k << " ";
    return 0;
}
