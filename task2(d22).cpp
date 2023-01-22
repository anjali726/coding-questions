//task2 day22
//Problem Link : https://leetcode.com/problems/contains-duplicate/submissions/883114269/
 
#include<bits/stdc++.h>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool ans=false;
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        for(auto i : m){
            if(i.second>1){
                return true;
            }
        }
        return ans;
    }
};


// Input
// nums =
// [1,2,3,1]
// Output
// true
// Expected
// true
