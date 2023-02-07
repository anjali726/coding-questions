//task1 day38
//Problem Link : https://leetcode.com/problems/difference-between-element-sum-and-digit-sum-of-an-array/submissions/893160826/?fbclid=IwAR1ug3B8r1v68Yum9NB2w2zLB1LMkLMT0EwtFU9hIlzz9Llz3OpgLGDg2uU

class Solution {
public:
    int use(int n){
        int sum=0;
        while(n){
            sum+=n%10;
            n=n/10;
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) {
        int elesum=0;
        for(int i=0;i<nums.size();i++){
            elesum+=nums[i];
        }
        int digitsum=0;
        for(int i=0;i<nums.size();i++){
            digitsum+=use(nums[i]);
        }
        int ans=abs(elesum-digitsum);
        return ans;
    }
};

// Input
// nums =
// [1,15,6,3]
// Output
// 9
// Expected
// 9
