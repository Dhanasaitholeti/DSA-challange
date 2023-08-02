#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

int majorityElement(vector<int>& nums) {
    int n = nums.size();
    unordered_map<int,int> hashmap;
    for(int i:nums){
        (!hashmap.count(i))? hashmap[i]=1 : hashmap[i] = hashmap[i]+1;
    }

    int majorityEle = 0;
    for(auto i:hashmap){
        if(i.second >  n/2) majorityEle=i.first;
    }

    return majorityEle;

}


int main(){
    vector<int> nums = {2,2,1,1,1,2,2};
    int result = majorityElement(nums);
    cout << result;
    return 0;
}