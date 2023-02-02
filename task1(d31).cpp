//task1 day31
//Problem Link : https://leetcode.com/problems/find-peak-element/submissions/890119801/

class Solution {
public:
    int helper(vector<int> nums, int start,int end){
        if(end>=start){
            int mid=(start+end)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
                return mid;
            }
            else if(nums[mid]>nums[mid-1] && nums[mid]<nums[mid+1]){
                return helper(nums,mid+1,end);
            }
            else{
                return helper(nums,start,mid-1);
            }
        }
        return 0;
    } 
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return 0;
        if(nums[0]>nums[1])
            return 0;
        if(nums[n-1]>nums[n-2])
            return n-1;
        int ans=helper(nums,1,n-2);
        return ans;
    }
};

//Input
//nums =
//[1,2,3,1]
//Output
//2
//Expected
//2
