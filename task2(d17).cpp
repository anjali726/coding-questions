//task2 day17
//Problem link : https://practice.geeksforgeeks.org/problems/find-the-highest-number2259/1

class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        // Code here.
        int n=a.size();
        for(int i=0;i<a.size()-1;i++){
            if(a[i]>a[i+1]){
                return a[i];
                break;
            }
        }
        return a[n-1];
    }
};


// For Input: 
// 5
// 1 2 3 4 5
// Your Output: 
// 5
// Expected Output: 
// 5
