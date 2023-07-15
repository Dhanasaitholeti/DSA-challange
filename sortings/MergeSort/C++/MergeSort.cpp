#include<iostream>
#include<vector>
using namespace std;

vector<int> Merge(vector<int>& arr,int l,int m,int r) {
    vector<int> left(arr.begin() + l, arr.begin() + m + 1);
    vector<int> right(arr.begin() + m + 1, arr.begin() + r + 1);
    int i = 0, j = 0, k = l;
    while (i < left.size() && j < right.size()) {
        if (left[i] < right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
        }
    }
    while (i < left.size()) {
        arr[k++] = left[i++];
    }

    while (j < right.size()) {
        arr[k++] = right[j++];
    }

    return arr;

}

vector<int> MergeSort(vector<int>& arr, int start, int end){
    if(arr.size()<=1) return arr;
    if(end-start+1<=1) return arr;
    int mid = start+(end-start)/2;
    MergeSort(arr,start,mid);
    MergeSort(arr,mid+1,end);

    Merge(arr,start,mid,end);

    return arr;
}

int main(){
    vector<int> arr = {456,523,132,5411};
    vector<int> result =  MergeSort(arr,0,arr.size()-1); 
    for(int i:result) cout << i << " ";
    return 0;
}