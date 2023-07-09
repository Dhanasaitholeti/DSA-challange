#include<iostream>
#include<iostream>
#include<vector>

using namespace std;

vector<int> BubbleSort(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size()-1;j++){
            if(arr[j+1]<arr[j]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}

int main(){
    vector<int> nums = {995,123,520,420,620,450};
    vector<int> res = BubbleSort(nums);
    for(int i:res) cout << i << " ";
    return 0;
}