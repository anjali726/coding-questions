//task1 day11
//problem link : https://leetcode.com/problems/duplicate-zeros/description/

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        for(int i=0;i<arr.size()-1;){
            if(arr[i]==0){
                for(int j=arr.size()-2;j>=i+1;j--){
                    arr[j+1]=arr[j];
                }
                arr[i+1]=0;
                i+=2;
            }
            else{
                i+=1;
            }
        }
    }
};


// Input
// arr =
// [8,4,5,0,0,0,0,7]
// Output
// [8,4,5,0,0,0,0,0]
// Expected
// [8,4,5,0,0,0,0,0]
