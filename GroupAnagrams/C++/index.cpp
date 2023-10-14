#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;


map<string,vector<string>> Anagramgroups;


void checkAnagram(string word){
    string keyString="";
    map<char,int> minimap;

    for(int i=0;i<word.length();i++){
        if(minimap.count(word[i])){
           minimap[word[i]]+=1;
        }else{
        minimap[word[i]]=1;
        }
    }
    
    for (const auto& pair : minimap){
     keyString += pair.first + to_string(pair.second);
    }
    
    // std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    if(Anagramgroups.count(keyString)){
        Anagramgroups[keyString].push_back(word);
    }else{
        Anagramgroups[keyString] = {word};
    }

}



vector<vector<string>> groupAnagrams(vector<string>& strs){
    if(strs.size()==0)
        return {};
    for(string s:strs){
        checkAnagram(s);
    }
    vector<vector<string>> finalList;
    vector<string> minilist;

    for (const auto& pair : Anagramgroups) {
        for(string i:pair.second) minilist.push_back(i);
        finalList.push_back(minilist);
        minilist = {};
    }
    return finalList;
}


int main(){
    vector<string> names = {"eat","tea","tan","ate","nat","bat","ac","bd","aac","bbd","aacc","bbdd","acc","bdd"};
    vector<vector<string>> val =  groupAnagrams(names);
    for(vector<string> s: val) {
        for(string k:s)
        cout << k << endl ;

        cout << "++++++++++++++++++" << endl;
    }
    return 0;
}
