//task1 day25
//Problem Link : https://leetcode.com/problems/spiral-matrix/solutions/?fbclid=IwAR30lsv9rwnpxzl1Tcbc4hYw0xUGtd9G1P9YRwq4AjyAnERy3zgluPhei8g


#include<bits/stdc++.h>
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int count=0;
        int size=m*n;
        int i=0;
        int o=0;
        int j=n-1;
        int k=m-1;
        vector<int> ans;
        while(count<size){
            for(int l=i;l<=j && count<size;l++){
                ans.push_back(matrix[i][l]);
                count++;
            }
            i++;
            for(int l=i;l<=k && count<size;l++){
                ans.push_back(matrix[l][j]);
                count++;
            }
            j--;
            for(int l=j;l>=o && count<size;l--){
                ans.push_back(matrix[k][l]);
                count++;
            }
            k--;
            for(int l=k;l>=i && count<size;l--){
                ans.push_back(matrix[l][o]);
                count++;
            }
            o++;
        }
        return ans;
    }
};



// Input
// matrix =
// [[1,2,3],[4,5,6],[7,8,9]]
// Output
// [1,2,3,6,9,8,7,4,5]
// Expected
// [1,2,3,6,9,8,7,4,5]
