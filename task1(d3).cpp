
//task1 (day 3)
//problem link : https://leetcode.com/problems/pascals-triangle/description/
//Pascal triangle



#include<bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows);
        for(int i=0;i<numRows;i++){
            for(int j=0;j<=i;j++){
                if(j==0 || i==j){
                    int a=1;
                    ans[i].push_back(a);
                }
                else{
                    int a=ans[i-1][j-1]+ans[i-1][j];
                    ans[i].push_back(a);
                }
            }
        }
        return ans;
    }
};

// numRows =
// 5
// Output
// [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
// Expected
// [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
