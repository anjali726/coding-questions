//https://leetcode.com/problems/array-partition/submissions/919286931/

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int size=nums.size();
        int sum=0;
        for(int i=0;i<size;i+=2){
            sum+=nums[i];
        }
        return sum;
    }
};
