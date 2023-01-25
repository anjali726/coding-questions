//task1 day25
//Problem Link : https://leetcode.com/problems/merge-sorted-array/submissions/884825355/
 
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // int temp=0;
        int i=0,j=0;
        while(i<m){
            if(n==0 || nums1[i]<=nums2[j]){
                i++;
            }
            else if(m==0 || nums1[i]>nums2[j]){
                int temp1=nums1[i];
                nums1[i]=nums2[j];
                nums2[j]=temp1;
                i++;
                sort(nums2.begin(),nums2.end());
            }
        }
        while(i<m+n){
            nums1[i]=nums2[j];
            j++;
            i++;
        }
    }
};


// nums1 =
// [1,2,3,0,0,0]
// m =
// 3
// nums2 =
// [2,5,6]
// n =
// 3
// Output
// [1,2,2,3,5,6]
// Expected
// [1,2,2,3,5,6]
