#include<iostream>
#include<vector>
#include<string>
#include<cctype>

using namespace std;

bool validPalindrome(string s){
    string newstr = "";
    for(char c:s) if(isalnum(c)) newstr.push_back(tolower(c));    
    cout << newstr << endl;
    for(int i=0;i<newstr.length()/2;i++) if(newstr[i]!=newstr[newstr.length()-1-i]) return false;
    return true;     
}

int main(){
    bool res = validPalindrome("ten, et");
    cout << res;
    return 0;
}