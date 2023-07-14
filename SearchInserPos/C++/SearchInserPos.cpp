#include<iostream>
#include<vector>

using namespace std;
int globalmid;

int SearchIndex(vector<int>& arr,int start,int end,int target) {

    if(start>end) return arr[globalmid]>target?globalmid:globalmid+1;
    int mid = start+(end-start)/2;
    globalmid = mid;

    if(arr[mid]==target){
        return mid;
    } 
    else if(target>arr[mid]) return SearchIndex(arr,mid+1,end,target);
    else  return SearchIndex(arr,start,mid-1,target);

}

int main(){
    vector<int> arr = {1,3,5,6};
    int re = SearchIndex(arr,0,arr.size()-1,2);
    cout << re << endl;
    return 0;
}