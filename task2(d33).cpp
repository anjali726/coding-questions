//task2 day33
//Problem Link : https://leetcode.com/problems/intersection-of-two-arrays-ii/submissions/890859669/?fbclid=IwAR09YJwGzsZ8vFHZBYNiIjZO8ZWBRdoWpsl2Ny1G6ru_mqqWR1qE2MbWrNQ


class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> m1;
        unordered_map<int,int> m2;
        for(int i=0;i<nums1.size();i++){
            m1[nums1[i]]++;
        }
        vector<int> ans;
        for(int i=0;i<nums2.size();i++){
            m2[nums2[i]]++;
        }
        for(int i=0;i<nums1.size();i++){
            if(m1[nums1[i]]>0 && m2[nums1[i]]>0){
                ans.push_back(nums1[i]);
                m1[nums1[i]]--;
                m2[nums1[i]]--;
            }
        }
        return ans;
    }
};

// Input
// nums1 =
// [1,2,2,1]
// nums2 =
// [2,2]
// Output
// [2,2]
// Expected
// [2,2]
