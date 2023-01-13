//task2 day13
//Problem Link : https://leetcode.com/problems/maximum-ice-cream-bars/discussion/

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int ans=0;
        int count=0;
        for(int i=0;i<costs.size();i++){
            ans+=costs[i];
            if(coins<ans){
                count=i;
                break;
            }
        }
        if(ans<coins){
            count=costs.size();
        }
        return count;
    }
};


// Input
// costs =
// [1,3,2,4,1]
// coins =
// 7
// Output
// 4
// Expected
// 4
