//task2 day 43
//Problem Link : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/submissions/894216242/
class Solution {
public:
    int use(vector<int> nums,int start,int end){
        while(end>=start){
            int mid=(start+end)/2;
            if(nums[start]<=nums[end]){
                return nums[start];
            }
            else if(mid-1!=-1 && mid+1!=nums.size() && nums[mid-1]>nums[mid] && nums[mid+1]>nums[mid]){
                return nums[mid];
            }
            else if(nums[mid]<nums[start]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return 0;
    }
    int findMin(vector<int>& nums) {
        int ans=use(nums,0,nums.size()-1);
        return ans;
    }
};
