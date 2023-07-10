#include<iostream>
#include<vector>

using namespace std;

vector<int> SelectionSort(vector<int> arr){
    for(int i=0;i<arr.size()-1;i++){
        for(int j=i;j<arr.size();j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}


int main() {
    vector<int> nums = {45,78,3,21,5};
    vector<int> res = SelectionSort(nums);
    for(int i:res) cout << i << " "; 
    return 0;
}