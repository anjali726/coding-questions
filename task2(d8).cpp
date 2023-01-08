//task2 day7
//Problem Link : https://practice.geeksforgeeks.org/problems/find-element-occuring-once-when-all-other-are-present-thrice/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article


#include<bits/stdc++.h>
class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        // code here
        // 
        sort(arr,arr+N);
        for(int i=0;i<N;){
            if(arr[i]==arr[i+1]){
                i+=3;
            }
            else{
                return arr[i];
                break;
            }
        }
        
    }
};

// For Input: 
// 4
// 1 10 1 1
// Your Output: 
// 10
// Expected Output: 
// 10
