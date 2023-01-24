//task1 day24
//Problem Link : https://leetcode.com/problems/two-sum/discussion/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        int second;
        for(int i=0;i<nums.size();i++){
            if(m[nums[i]]>0){
            m[nums[i]]--;
            int temp=target-nums[i];
            if(m[temp]>0){
                ans.push_back(i);
                m[temp]--;
                second=temp;
            }}
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==second){
                ans.push_back(i);
                break;
            }
        }
        return ans;
    }
};



// Input
// nums =
// [2,7,11,15]
// target =
// 9
// Output
// [0,1]
// Expected
// [0,1]
