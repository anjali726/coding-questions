//task1 day6
//problem link : https://practice.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article


class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        // code here
        bool ans=true;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                ans=false;
                break;
            }
        }
        return ans;
    }
};

// For Input: 
// 5
// 10 20 30 40 50
// Your Output: 
// 1
// Expected Output: 
// 1
