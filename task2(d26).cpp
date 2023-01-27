//task2 day26
//Problem Link : https://leetcode.com/problems/minimum-recolors-to-get-k-consecutive-black-blocks/description/?fbclid=IwAR3dfrzAwPwoV2rYQQp7a6qxQHjn5uAYAZtyiV48x5DUUh4ZvvZAOenv6is

class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n=blocks.size();
        int count=0;
        int ans=INT_MAX;
        int i=0,j=0;
        while(j<n){
            if(blocks[j]=='W'){
                count++;
            } 
            if(j-i+1==k){
                if(ans>count){
                    ans=count;
                }
                if(blocks[i]=='W'){
                    count--;
                }
                i++;
                j++;
            }
            else{
               j++;
            }
        }
        return ans;
    }
};

// Input
// blocks =
// "WBBWWBBWBW"
// k =
// 7
// Output
// 3
// Expected
// 3
