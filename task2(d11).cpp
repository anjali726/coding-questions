//task2 day11
//problem link : 
 
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int a[1001]={0};
        for(int i=0;i<nums1.size();i++){
            a[nums1[i]]=1001;
        }
        for(int i=0;i<nums2.size();i++){
            a[nums2[i]]++;
        }
        for(int i=0;i<1001;i++){
            if(a[i]>1001){
                ans.push_back(i);
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
// [2]
// Expected
// [2]
