//task2 day21
//Problem Link : https://leetcode.com/problems/counting-bits/submissions/882391570/

#include<bits/stdc++.h>
class Solution {
public:
    int num1s(int n){
        int count=0;
        if(n==0)
            return 0;
        while(n>1){
            if(n%2!=0){
                count++;
            }
            n=n/2;
        }
        return count+1;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++){
            int temp=num1s(i);
            ans.push_back(temp);
        }
        return ans;
    }
};


// Input
// n = 2
// Output
// [0,1,1]
// Expected
// [0,1,1]
