//task2 day18
//Problem Link : https://leetcode.com/problems/lemonade-change/submissions/880576946/


class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        bool ans=true;
        unordered_map<int,int> a;
        for(int i=0;i<bills.size();i++){
            a[bills[i]]++;
            if(bills[i]==5){
                continue;
            }
            else if(bills[i]==10){
                if(a[5]>0){
                    ans=true;
                    a[5]--;
                }
                else{
                    ans=false;
                    break;
                }
            }
            else if(bills[i]==20){
                if(a[10]>0 && a[5]>0){
                    ans=true;
                    a[10]--;
                    a[5]--;
                }
                else if(a[5]>=3){
                    ans=true;
                    a[5]--;
                    a[5]--;
                    a[5]--;
                }
                else{
                    ans=false;
                    break;
                }
            }
        }
       
        return ans;
    }
};



// Input
// bills =
// [5,5,5,20]
// Output
// true
// Expected
// true
