//task2 : https://leetcode.com/problems/sort-characters-by-frequency/submissions/918678067/


#include<bits/stdc++.h>
void reverseStr(string& str)
{
    int len = str.length();
    int n = len-1;
    int i = 0;
    while(i<=n){
        swap(str[i],str[n]);
        n = n-1;
        i = i+1;
  }
 
}
class Solution {
public:
    string frequencySort(string s) {
        map<char,int> m;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
        }
        map<int,string> n;
        for(auto i: m){
            n[i.second]+=i.first;
        }
        string ans;
        for(auto i:n){
            int u=i.first;
            int k=u;
            string s=i.second;
            for(int i=s.size()-1;i>=0;i--){
                while(u){
                    ans+=s[i];
                    u--;
                }
                u=k;
            }
        }
        reverseStr(ans);
        return ans;
    }
};


// Input
// s =
// "tree"
// Output
// "eert"
// Expected
// "eert"
