#include<iostream>
#include<map>
#include<vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {

}

int main(){
    vector<int> nums = {0,0,1,1,1,1,2,3,3};
    int res = removeDuplicates(nums);
    cout << res << endl;
    for(int i : nums) cout << i << " ";
    return 0;
}