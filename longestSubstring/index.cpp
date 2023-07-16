#include<iostream>
#include<string>
#include<vector>
#include<bits/stdc++.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "pwwkew";
    unordered_set<char>uniqueChar;
    int start = 0;
    int end = 0;
    int ans = 0;
    int length = 0;
    for(int end = 0; end<str.size(); end++){
        while(uniqueChar.count(str[end])){
            uniqueChar.erase(str[start]);
            start++;
        }
        uniqueChar.insert(str[end]);
        length = end-start+1;
        ans = length>ans?length:ans;
    }
    cout << ans << endl;
}