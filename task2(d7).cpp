//task2 day7
//Problem Link : https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        
        sort(array.begin(),array.end());
        for(int i=1;i<n;i++){
            if(array[i-1]!=i){
                return i;
                break;
            }
        }
        return n;
        
        
    }
};

// For Input: 
// 5
// 1 3 4 2
// Your Output: 
// 5
// Expected Output: 
// 5

