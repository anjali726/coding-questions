//https://leetcode.com/problems/array-with-elements-not-equal-to-average-of-neighbors/description/?fbclid=IwAR1uGDJmrTkaDWLOd_oCn9xXx5HJBJE8lGF5DsqfW5mLpiI4ABBlDjmJmaQ

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        while(j>=i){
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            i++;
            j--;
        }
        if(nums.size()%2!=0)
        ans.pop_back();
        return ans;
    }
};
