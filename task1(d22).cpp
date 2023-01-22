//task1 day22
//Problem Link : https://leetcode.com/problems/isomorphic-strings/submissions/883013217/


class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.size();
        bool ans=false;
        unordered_map<char,char> m,m1;
        for(int i=0;i<n;i++){
             if(!(m[s[i]])){
                 m[s[i]]=t[i];
             }
             else{
                 if(m[s[i]]!=t[i])
                    return false;
             }
        }
        for(int i=0;i<n;i++){
             if(!(m1[t[i]])){
                 m1[t[i]]=s[i];
             }
             else{
                 if(m1[t[i]]!=s[i])
                    return false;
             }
        }
        if(m.size()==m1.size()){
            ans=true;
        }
        return ans;
    }
};




// Input
// s =
// "egg"
// t =
// "add"
// Output
// true
// Expected
// true
