//task1 day18
//problem link : https://leetcode.com/problems/create-target-array-in-the-given-order/description/


class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ans;
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(ans.size()<=index[i]){
                ans.push_back(nums[i]);
            }
            else{
                ans.push_back(nums[i]);
                for(int j=ans.size()-1;j>index[i];j--){
                    ans[j]=ans[j-1];
                }
                ans[index[i]]=nums[i];

            }
        }
        return ans;
    }
};

// Input
// nums =
// [0,1,2,3,4]
// index =
// [0,1,2,2,1]
// Output
// [0,4,1,3,2]
// Expected
// [0,4,1,3,2]
