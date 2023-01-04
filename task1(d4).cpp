//task1 day4
//problem link: https://leetcode.com/problems/rotate-image/submissions/871061192/
//Rotate Image


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++){
            for(int j=i;j<matrix.size();j++){
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        int l=0;
        int h=matrix.size()-1;
        while(h>=l){
            for(int i=0;i<matrix.size();i++){
                int temp=matrix[i][h];
                matrix[i][h]=matrix[i][l];
                matrix[i][l]=temp;
                
            }
            l++;
            h--;
        }
    }
};

// Input
// matrix =
// [[1,2,3],[4,5,6],[7,8,9]]
// Output
// [[7,4,1],[8,5,2],[9,6,3]]
// Expected
// [[7,4,1],[8,5,2],[9,6,3]]
