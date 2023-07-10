#include<iostream>
#include<vector>
#include<string>
using namespace std;

string LCP(vector<string> strs){
    for(int i = 0; i < strs.size()-1;i++){
        for(int j = i; j<strs.size(); j++){
            if(strs[i]>strs[j]){
                string temp = strs[i];
                strs[i] = strs[j];
                strs[j] =  temp;
            }
        }
    }

    string finastr = "";
    string first = strs[0];
    string last = strs[strs.size()-1];
    for(int i = 0; i < first.size(); i++){
        if(first[i] != last[i]){ 
            break; 
        }
            finastr+=first[i];
    }

    return finastr;
}

int main(){
    vector<string> strs = {"gowl","golf","good"};
    string res = LCP(strs);
    cout<< res;
    return 0;
}
