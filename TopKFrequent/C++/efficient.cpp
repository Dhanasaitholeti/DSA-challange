#include<iostream>
#include<map>
#include<vector>

using namespace std;


vector<int> frequentElements(vector<int>& nums,int k){
    int n = nums.size();
    map<int,int> minimap;
    vector<vector<int>> constArr(n+1,vector<int>());

    for(int i:nums){
        if(minimap.count(i)){
            minimap[i]+=1;
        }
        else{
            minimap[i]=1;
        }
    }


    for(auto& pair:minimap){
        constArr[pair.second].push_back(pair.first);
    }

    vector<int> result;
        
        for (int i = n; i >= 0; i--) {
            if (result.size() >= k) {
                break;
            }
            if (!constArr[i].empty()) {
                result.insert(result.end(), constArr[i].begin(), constArr[i].end());
            }
        }

    return result;

}


int main(){
	vector<int> nums = {5,5,5,1,1,1,2,2};
	vector<int> ans =  frequentElements(nums,2);
	for(int i:ans) cout << i << endl;
	return 0;
}