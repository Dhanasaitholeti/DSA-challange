#include<iostream>
#include<vector>
#include<string>

using namespace std;


int strSearch(string haystack, string needle){
    int n = needle.length();
    int len = haystack.length();
    char lastletter =  needle[n-1];
    int i = 0;
    while(i<len){
        if(haystack[i]==lastletter && i>=n-1) {
            if (haystack.substr(i-n+1,n) == needle){
                    return i-n+1;
            } 
        }
        i++;
    }

    return -1;
}


int main(){
    string haystack = "Dhanasai";
    string needle = "ana";
    int res = strSearch(haystack, needle);
    cout << res << endl;
    return 0;
}