//task1 day15
//problem link : https://leetcode.com/problems/first-bad-version/submissions/878506411/


// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
int ans;
class Solution {
public:
    int ans(int start,int end){
        long int mid=start+(end-start)/2;
            if(isBadVersion(mid) && !isBadVersion(mid-1)){
                return mid;
            }
            else if(isBadVersion(mid)){
                return ans(start,mid-1);
            }
            else{
                return ans(mid+1,end);
            }
        
    }
    int firstBadVersion(int n) {
        return ans(1,n);
        // if(isBadVersion(n)){
        //    firstBadVersion(n-1);
        // }
        // else{
            
        //      ans= n+1;
        // }
        // return ans;
    }
};


// Input
// 2126753390
// 1702766719
// Output
// 1702766719
// Expected
// 1702766719
