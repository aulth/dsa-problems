#include<iostream>
#include<unordered_map>
#include<stack>
#include<bits/stdc++.h>
using namespace std;
bool isValid(string s){
    stack<int>stack;
    for(auto x:s){
        if(x=='(' || x=='{' || x=='['){
            stack.push(x);
        }else{
            if(stack.empty()){
                return false;
            }
            char top = stack.top();
            stack.pop();
            if(x==')' && top !='(' || x=='}' && top!='{' || x== ']' && top!='['){
                return false;
            }
        }
    }
    return stack.empty();
}

//using unordered_map
bool isValidd(string s){
    stack<char>st;
    unordered_map<char, char>matchingBrackets{{')', '('}, {'}', '{'}, {']', '['}};
    for(char x:s){
        if(x=='(' || x=='{' || x=='['){
            st.push(x);
        }else{
            if(st.empty() || st.top()!=matchingBrackets[x]){
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}
int main(){
    string s = "[{}]";
    cout << isValidd(s);
}
