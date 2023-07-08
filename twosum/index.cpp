#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
    vector<int>nums{1,2,2,3,4};
    unordered_map<int, int>numMap;
    vector<int>ans;
    int target = 5;
    for(int i = 0 ; i< nums.size(); i++){
        int complement = target-nums[i];
        if(numMap.count(complement)){
            ans.push_back(numMap[complement]);
            ans.push_back(i);
            break;
        }
        numMap[nums[i]] = i;
    }
    for(auto x:ans){
        cout << x << " ";
    }
}