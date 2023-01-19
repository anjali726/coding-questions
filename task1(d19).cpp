//task1 day19
//Problem Link : https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/submissions/881143664/


#include<bits/stdc++.h>
class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> m;
        bool ans;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        int temp=m[s[0]];
        for(auto i:m){
            if(i.second==temp){
                ans=true;
            }
            else{
                ans=false;
                break;
            }
        }
        return ans;
    }
};



// Input
// s =
// "abacbc"
// Output
// true
// Expected
// true
