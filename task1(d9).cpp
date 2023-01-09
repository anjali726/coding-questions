//task1 day9
//https://practice.geeksforgeeks.org/problems/power-of-2-1587115620/1


class Solution{
    public:
    bool ans=false;
    bool isPowerofTwo(long long n){
        // Your code here   
        if(n<=0){
            return false;
        }
        if(n==1){
            return true;
        }
        long long temp=1;
        for(long long i=1;i<sqrt(n);i++){
            temp=temp*2;
            if(temp==n){
                ans=true;
                break;
            }
        }
        
    }
};

// For Input: 
// 65
// Your Output: 
// NO
// Expected Output: 
// NO
