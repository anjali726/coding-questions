//task2 day32
//Problem Link : https://leetcode.com/problems/range-sum-query-2d-immutable/submissions/889929641/

class NumMatrix {
public:
//in this question we have made an extra row and column for handaling the edge cases like we made a matrix m of size M+1,N+1 instead of M,N and initialize the first row and column with 0 so that if they access then while performing edge cases it would be easier for us.
    vector<vector<int>> m;
    NumMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int o = matrix[0].size();
        m = vector < vector <int>>(n+1, vector <int> (o+1));
        for(int i=1;i<=matrix.size();i++){
            for(int j=1;j<=matrix[0].size();j++){
                if(i==1 && j==1)
                    m[i][j]=matrix[i-1][j-1];
                else if(i==0){
                    m[i][j]=matrix[i-1][j-1]+m[i][j-1];
                }
                else if(j==0){
                    m[i][j]=matrix[i-1][j-1]+m[i-1][j];
                }
                else{
                    m[i][j]=matrix[i-1][j-1]+m[i-1][j]+m[i][j-1]-m[i-1][j-1];
                }
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
            return m[row2+1][col2+1]-m[row2+1][col1]-m[row1][col2+1]+m[row1][col1];
    }
};


// Input
// ["NumMatrix","sumRegion","sumRegion","sumRegion"]
// [[[[3,0,1,4,2],[5,6,3,2,1],[1,2,0,1,5],[4,1,0,1,7],[1,0,3,0,5]]],[2,1,4,3],[1,1,2,2],[1,2,2,4]]
// Output
// [null,8,11,12]
// Expected
// [null,8,11,12]
