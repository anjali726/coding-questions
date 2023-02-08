//task1 day39
//Problem Link : https://leetcode.com/problems/factorial-trailing-zeroes/submissions/894114817/?fbclid=IwAR0JHr4mJ5PzRYUiQPdAfXaR0r6WnU4X9Ner_MrzbLDYF4XjanU9woNRCic

class Solution {
public:
    int trailingZeroes(int n) {
        int t=n;
        int sum=0;
        while(t>=5){
            t=t/5;
            sum+=t;
        }
        return sum;
    }
};


// Input
// n =
// 120
// Output
// 28
// Expected
// 28
