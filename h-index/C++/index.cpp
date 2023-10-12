#include<iostream>
#include<vector>
using namespace std;

int hindex(vector<int>& nums){
    vector<int> elements(5000,0);

    cout << elements.size() << endl; 

    for(int i=0;i<nums.size();i++) elements[nums[i]] = elements[nums[i]]+1;

    vector<int> sortednums;

    for(int k=0;k<nums.size();k++) {
        
        while(elements[k]>0){
            sortednums.push_back(k);
            elements[k]--;
        }
    }

    cout << sortednums.size() << endl;

    for(int i:sortednums) cout << i << " ";





    return 0;
}


int main(){
    vector<int> nums = {1,2,3,3,2,4,4,5,25};
    hindex(nums);
    return 0;
}