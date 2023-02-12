//task1 day43
//Problem Link : https://leetcode.com/problems/power-of-four/submissions/896380590/

class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==1)
        return true;
        bool a=false;
        long int ans=1;
        for(int i=1;i<=n/2;i++){
            ans=ans*4;
            if(ans==n){
                a=true;
                break;
            }
            else if(ans>n){
                break;
            }

        }
        return a;
    }
};

// Input
// n =
// 65
// Output
// false
// Expected
// false
