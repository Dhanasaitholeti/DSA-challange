#include<iostream>
#include<map>
#include<vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    vector<int> correctOrderValues;
    map<int,int> uniqueElements;
    int n=nums.size();
    for(int i:nums){
        if(correctOrderValues.size() < 1 || correctOrderValues[correctOrderValues.size()-1] != i){
                correctOrderValues.push_back(i);
                uniqueElements[i] = 1;
        }
        else if(uniqueElements[i] < 2 ) uniqueElements[i] = uniqueElements[i]+1;               
    }

    nums.clear();

    for(int i =0 ;i<correctOrderValues.size();i++){
        for(int j=0; j<uniqueElements[correctOrderValues[i]]; j++) nums.push_back(correctOrderValues[i]);   
    }
    
    int count = nums.size();

    nums.resize(n);

    return count;
}

int main(){
    vector<int> nums = {0,0,1,1,1,1,2,3,3};
    int res = removeDuplicates(nums);
    cout << res << endl;
    for(int i : nums) cout << i << " ";
    return 0;
}