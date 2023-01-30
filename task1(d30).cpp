//task1 day30
//Problem Link : https://leetcode.com/problems/number-of-sub-arrays-of-size-k-and-average-greater-than-or-equal-to-threshold/submissions/887981499/

class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int i=0,j=0;
        int n=arr.size();
        int count=0;
        int sum=0;
        while(j<n){
            sum+=arr[j];
            if(j-i+1==k){
                int temp=sum/k;
                if(temp>=threshold){
                    count++;
                }
                sum-=arr[i];
                i++;
                j++;
            }
            else
                j++;
        }
        return count;
    }
};


// Input
// arr =
// [2,2,2,2,5,5,5,8]
// k =
// 3
// threshold =
// 4
// Output
// 3
// Expected
// 3
