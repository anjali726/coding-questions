//task2 day31
//Problem Link :

class NumArray {
public:
    vector<int> temp;
    int n;
    NumArray(vector<int>& nums) {
        n=nums.size();
        for(int i=0;i<nums.size();i++){
            temp.push_back(nums[i]);
        }
        for(int i=1;i<n;i++){
            temp[i]=temp[i]+temp[i-1];
        }
    }
    
    int sumRange(int left, int right) {
        if(left==0)
            return temp[right];
        else
            return temp[right] - temp[left-1];
    }
};

// Input
// ["NumArray","sumRange","sumRange","sumRange"]
// [[[-2,0,3,-5,2,-1]],[0,2],[2,5],[0,5]]
// Output
// [null,1,-1,-3]
// Expected
// [null,1,-1,-3]
