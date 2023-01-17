//task1 day17
//problem link : https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/description/

#include<bits/stdc++.h>
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans=INT_MIN;
        for(int i=0;i<sentences.size();i++){
            int count=1;
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j]==' '){
                    count++;
                }
            }
            if(count>ans){
                ans=count;
            }
        }
        return ans;
    }
};


// Input
// sentences =
// ["alice and bob love leetcode","i think so too","this is great thanks very much"]
// Output
// 6
// Expected
// 6
