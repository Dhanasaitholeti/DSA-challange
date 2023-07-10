#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>

using namespace std;

unordered_map<char,int> alphas = {
    {'a',0},{'b',0},{'c',0},{'d',0},{'e',0},{'f',0},{'g',0},{'h',0},{'i',0},{'j',0},{'k',0},{'l',0},{'m',0},{'n',0},{'o',0},{'p',0},{'q',0},{'r',0},{'s',0},{'t',0},{'u',0},{'v',0},{'w',0},{'x',0},{'y',0},{'z',0}
};


bool CheckPangram(string s){
    for(char c:s) alphas[c] = 1;

    vector<char> keys;

    for(const auto& key : alphas) keys.push_back(key.first);

    for(char k : keys) {
        if(alphas[k] != 1) return false;
    }

    return true;
}


int main(){
    string sentence = "Dhanasai";
    bool res = CheckPangram(sentence);
    cout << res ;
    return 0;
}