#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

bool containsDuplicates(vector<int>& nums){
    unordered_map<int,int> map;
    for(int i:nums) {
        if(map.count(i)) return true;
        map[i]=1;
    }
    return false;
}

int main(){
    vector<int> nums = {1,2,3,4};
    bool res = containsDuplicates(nums);
    cout << res << endl;
    return 0;
}