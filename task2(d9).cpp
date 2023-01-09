//task2 day9
//https://practice.geeksforgeeks.org/problems/sum-of-primes0042/1


class Solution{
public:
    bool isPrime(int n){
        bool ans=true;
        if(n==1){
            return false;
        }
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                ans=false;
                break;
            }
        }
        return ans;
    }
    int primeSum(int N){
        // code here
        int sum=0;
        while(N>0){
            int temp=N%10;
            if(isPrime(temp)==true){
                sum+=temp;
            }
            N=N/10;
        }
        return sum;
    }
};

// For Input: 
// 123
// Your Output: 
// 5
// Expected Output: 
// 5
