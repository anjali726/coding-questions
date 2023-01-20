//task1 day20
//Problem Link : https://leetcode.com/problems/count-primes/

class Solution {
public:
    int countPrimes(int n) {
        int count=0;
        bool a[5000000];
        for(int i=0;i<n;i++){
            a[i]=1;
        }
        for(int i=2;i*i<n;i++){
            
                for(int j=i*i;j<n;j+=i){
                     a[j]=0;
                }
            
        }
        for(int i=2;i<n;i++){
            if(a[i]){
                count++;
            }
        }
        return count;
    }
};

// Input
// n =
// 10
// Output
// 4
// Expected
// 4
