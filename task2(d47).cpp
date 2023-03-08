//task2 day47
//problem link : https://leetcode.com/problems/power-of-three/description/?fbclid=IwAR3IqkDCrhfcWzztjH27c74-LWRA5dk8w8aWLbykZKrqRyqBIZ-gxkwYPwU

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0){
            return false;
        }
        bool ans=true;
        while(n>1){
            if(n%3 != 0){
                cout<<n;
                ans=false;
                return ans;
            }
            n=n/3;
        }
        return ans;
    }
};


// Input
// n =
// 27
// Output
// true
// Expected
// true
