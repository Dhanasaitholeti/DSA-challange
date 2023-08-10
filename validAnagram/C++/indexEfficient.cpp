#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

bool isAnagram(string s,string t){

    if(s.size() != t.size()) return false;

    unordered_map<char,int> mapp;
    for(char i:s) mapp[i]++;
    for(char i:t) mapp[i]--;

    for(auto& pair:mapp) if(pair.second!=0) return false;
    
    return true;
}

int main(){
    string s = "anagram";
    string t = "nagaram";
    bool res = isAnagram(s,t);
    cout << res << endl;
    return 0;
}