#include<iostream>
#include<stack>
#include<string>

using namespace std;


bool isValidParanthesis(string s){
    stack<char> stk;
    //we are having only these characters "({[]})" in the string so i companring directly
    
    for(char c:s){
        if( c =='(' || c == '{' || c == '[' ){
            stk.push(c);
        }
        else{
            if(stk.empty()){
                cout << "doing the false";
                return false;
            }
            if( c ==']' && stk.top()=='[' || c =='}' && stk.top()=='{' || c ==')' && stk.top()=='(' ) stk.pop();

            else return false;
        }
    }
    cout << stk.empty();
    return stk.empty();
}



int main(){
    string str = "()[]";   
    isValidParanthesis(str);
    return 0;
}