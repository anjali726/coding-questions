//https://leetcode.com/problems/search-a-2d-matrix-ii/submissions/919702193/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        bool ans=false;
        int m=matrix.size();
        int n=matrix[0].size();
      
        for(int i=0;i<m;i++){
            int start=0;
            int end=n-1;
            while(start<=end){
                int mid=(start+end)/2;
                if(matrix[i][mid]==target){
                    ans=true;
                    return ans;
                }
                else if(matrix[i][mid] > target){
                    end=mid-1;
                }
                else if(matrix[i][mid] < target){
                    start=mid+1;
                }
            }
        }
         return ans;
    }
};
