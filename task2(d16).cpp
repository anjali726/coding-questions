//task2 day16
//problem link : https://leetcode.com/problems/sqrtx/discussion/


class Solution {
public:
    int mySqrt(int x) {
        if(x==0){
            return 0;
        }
        int ans=1;
        for(long i=1;i<=x/2;i++){
            long a1=i*i;
            long a2=(i+1)*(i+1);
            if(a1 == x){
                ans=i;
                break;
            }
            else if(a1 < x && a2 > x){
                ans=i;
                break;
            }
        }
        return ans;
    }
};


// Input
// x =
// 2147395600
// Output
// 46340
// Expected
// 46340
