//task1 day26
//Problem Link : https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/solutions/?fbclid=IwAR1Wa6lepoS7T3MPCp79QefFWqJ8k9GwI0bLOq11hc5y_RkILVYr6f21doQ

//approach 1
class Solution {
public:
    int countGoodSubstrings(string s) {
        unordered_map<char,int> m;
        int i=0,j=0;
        int count=0;
        while(j<s.size()){
            m[s[j]]++;
            bool ans=false;
            if(j-i+1 == 3){
                for(int k=i;k<=j;k++){
                    if(m[s[k]]==1){
                        ans=true;
                        cout<<s[k]<<" ";
                    }
                    else{
                        ans=false;
                        break;}
                }
                if(ans==true){
                    count++;
                }
                m[s[i]]--;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return count;
    }
};

//approach 2
#include<string.h>
#include<bits/stdc++.h>
class Solution {
public:
bool isunique(string s){
    unordered_map<char,int> m;
    cout<<s;
    bool ans=false;
    for(int i=0;i<3;i++){
        m[s[i]]++;
    }
    for(int i=0;i<3;i++){
        if(m[s[i]]==1){
            ans=true;
        }
        else{
            ans=false;
            break;
        }
    }
    return ans;
}
    int countGoodSubstrings(string s) {
        int n=s.size();
        int count=0;
        for(int i=0;i<n-2;i++){
            bool ans=isunique(s.substr(i,3));
            if(ans==true){
                count++;
            }
        }
        return count;
    }
};
