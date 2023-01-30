//task2 day30
//Problem Link : https://leetcode.com/problems/prime-arrangements/submissions/887997790/

class Solution {
public:
bool isprime(int i){
    bool ans=true;
    if(i==1)
        return false;
    for(int j=2;j<=i/2;j++){
        if(i%j==0){
            ans=false;
            break;
        }
        else{
            ans=true;
        }
    }
    return ans;
}
    int numPrimeArrangements(int n) {
        int prime=0;
        int notprime=0;
        for(int i=1;i<=n;i++){
            if(isprime(i)){
                prime++;
            }
            else{
                notprime++;
            }
        }
        long ans=1;
        for(int i=prime;i>=1;i--){
            ans=(ans*i)%1000000007;
        }
        for(int i=notprime;i>=1;i--){
            ans=(ans*i)%1000000007;
        }
        return ans%1000000007;
    }
};


// Input
// n =
// 50
// Output
// 451768713
// Expected
// 451768713
