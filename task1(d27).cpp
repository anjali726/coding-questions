//task1 day27
//Problem Link : https://leetcode.com/problems/maximum-average-subarray-i/description/

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans=INT_MIN;
        double sum=0;
        double temp=0;
        int n=nums.size();
        int i=0,j=0;
        while(j<n){
            sum=sum+nums[j];
            if(j-i+1==k){
                if(ans<sum){
                    ans=sum;
                }
                sum=sum-nums[i];
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        temp=ans/k;
        return temp;
    }
};

// Input
// nums =
// [1,12,-5,-6,50,3]
// k =
// 4
// Output
// 12.75000
// Expected
// 12.75000
