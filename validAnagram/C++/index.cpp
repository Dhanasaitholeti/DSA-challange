#include<iostream>
#include<string>
#include<unordered_map>

using namespace std;

bool isAnagram(string s,string t){
    unordered_map<int,int> maps1,maps2;
    for(int i:s) (maps1.count(i))?maps1[i]+=1:maps1[i]=1;
    for(int i:t) (maps2.count(i))?maps2[i]+=1:maps2[i]=1;

    return (maps1==maps2) ? true : false;

}

int main(){
    string s = "hello";
    string t = "sai";
    bool res = isAnagram(s,t);
    cout << res << endl;
    return 0;
}