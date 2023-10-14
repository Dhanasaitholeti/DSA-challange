#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;


vector<int> frequentElements(vector<int>& nums,int k){
	if(nums.size()==0){
		return {};
	}

	map<int,int> uniquenums;
	for(int i:nums){
		if(uniquenums.count(i)) uniquenums[i]+=1;
		else uniquenums[i]=1;
	}

	// for(auto& pair : uniquenums){
	// 	cout<<pair.first<< " " << pair.second<<endl;
	// }

	vector<pair<int,int>> vec(uniquenums.begin(),uniquenums.end());
	sort(vec.begin(),vec.end(),[](const auto& a, const auto& b) {
        return a.second > b.second;
    });


	vector<int> res = {};


	int i=0;
	for(auto& pair:vec){
		if(i<k){
		res.push_back(pair.first);
		i++;
		}
	}



	return res;


}


int main(){
	vector<int> nums = {5,5,5,1,1,1,2,2};
	vector<int> ans =  frequentElements(nums,2);
	for(int i:ans) cout << i << endl;
	return 0;
}