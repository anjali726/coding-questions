//task2 day28
//Problem Link : https://leetcode.com/problems/sum-of-unique-elements/submissions/886475597/

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(m[nums[i]]>1){
                continue;
            }
            else{
                count+=nums[i];
            }
        }
        return count;
    }
};

// Input
// nums =
// [1,2,3,2]
// Output
// 4
// Expected
// 4
