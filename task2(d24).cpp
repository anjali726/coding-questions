//task2 day24
//Problem Link : https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        int i=0;
        int j=0;
        long sum=0;
        long ans=0;
        while(j<N){
            sum+=Arr[j];
            if(j-i+1 == K){
                if(ans<sum){
                    ans=sum;
                }
                sum-=Arr[i];
                i++;j++;
            }
            else{
                j++;
            }
        }
        return ans;
    }
};

// For Input: 
// 6 4
// 10 20 30 40 50 60
// Your Output: 
// 180
// Expected Output: 
// 180
