#include<iostream>
#include<vector>

using namespace std;

vector<int> InsertionSort(vector<int>& arr){
    for(int i=1;i<arr.size();i++){
        int key = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]> key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    return arr;
}

int main(){
    vector<int> nums = {45,78,20,1,32};
    vector<int> res = InsertionSort(nums);
    for(int i: res) cout << i << " ";
    return 0;
}
