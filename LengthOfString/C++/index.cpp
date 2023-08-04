#include<iostream>
#include<string>

using namespace std;

int findLastStringLength(string str){
    if(str.length()<=0) return 0;
    int laststrlen=0;
    for(int i=str.length()-1; i >= 0;i--){
        if(str[i] == ' ' && laststrlen>0) break;
        else if(str[i] == ' ' && !laststrlen) continue;
        else laststrlen+=1;
    }
    return laststrlen;
}

int main(){
    int res = findLastStringLength(" hello Dhanasai ");
    cout << res << endl;
    return 0;
}