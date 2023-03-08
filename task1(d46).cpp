//task1 day46
//problem link : https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/submissions/910662660/?fbclid=IwAR0gEVm-0FJ8HJLY0GZkv3KmE2YhrTU30oGs1vUpyBqC3FeRz-UUlQKn74Q

class Solution {
public:
    int numberOfSteps(int num) {
        int k=0;
        while(num!=0){
            if(num%2==0){
                k++;
                num=num/2;
            }
            else{
                k++;
                num--;
            }
        }
        return k;
    }
};


// Input
// num =
// 14
// Output
// 6
// Expected
// 6
