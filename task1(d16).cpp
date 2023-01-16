//task1 day16
//Problem Link : https://leetcode.com/problems/guess-number-higher-or-lower/description/

int ans(int start,int end){
     if(end>=start){
     int mid=start+(end-start)/2;
         int g=guess(mid);
         if(g==0){
             return mid;
         }
         else if(g==-1){
             return ans(start,mid-1);
         }
         else if(g==1){
             return ans(mid+1,end);
         }
     }
    return 0; 
 }

class Solution {
public:
    int guessNumber(int n) {
        return ans(1,n);
    }
};


// Input
// 10
// 6
// Output
// 6
// Expected
// 6
