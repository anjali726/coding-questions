//task2 day14
//Problem Link : https://leetcode.com/problems/search-insert-position/description/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }
        }
        for(int i=0;i<nums.size()-1;i++){
            if(target<nums[i+1] && target>nums[i]){
                return i+1;
            }
        }
        if(target<nums[0]){
            return 0;
        }
        else{
            return nums.size();
        }
    }
};

// Input
// nums =
// [1,3,5,6]
// target =
// 5
// Output
// 2
// Expected
// 2
