//task1 day41
//Problem Link : https://leetcode.com/problems/sqrtx/submissions/895466397/?fbclid=IwAR3HMtoLAX-yfbK26lKtq5Bqknwa_PnCdWJcrvY6beloJjubrnIvyvX7TiU

class Solution {
public:
    int mySqrt(int x) {
        if(x==1)
            return 1;
        long long start=0;
        long long end=x/2;
        while(end>=start){
            long long mid=start+(end-start)/2;
            if(mid*mid <= x && (mid+1)*(mid+1) >x){
                return mid;
            }
            else if(mid*mid >=x){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return 0;
    }
};

// Input
// x =
// 10
// Output
// 3
// Expected
// 3
