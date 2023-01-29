//task2 day29
//Problem Link : https://practice.geeksforgeeks.org/problems/modified-numbers-and-queries0904/1?fbclid=IwAR1iXbfs2xfmCOnmljPGvaBkXrxGY50RgdQIodjDvTqFQI1oWU9sJHSSefI

//User function Template for C++
class Solution {
  public:
    bool checkisprime(int n){
        bool ans=true;
        if(n==1 || n==0)
            return false;
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                ans=false;
                break;
            }
            else
                ans=true;
        }
        return ans;
    }
    
    int sumOfAll(int l, int r){
        // code here
        int sum=0;
        for(int i=l;i<=r;i++){
            for(int j=1;j<=i;j++){
                if(i%j==0){
                    if(checkisprime(j)){
                        sum+=j;
                    }
                }
            }
        }
        return sum;
    }
};

// For Input: 
// 1 2
// Your Output: 
// 2
// Expected Output: 
// 2
