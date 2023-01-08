//task1 day7
//problem link : https://practice.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

#include<bits/stdc++.h>
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    int i=0;
	    int j=0;
	    while(j<n){
	        if(arr[i]!=0){
	            i++;
	            j++;
	        }
	        else{
	            while(arr[j]==0 && j<n){
	                j++;
	            }
	            if(j!=n){
	            swap(arr[i],arr[j]);}
	            i++;
	        }
	    }
	}
};


// For Input: 
// 7
// 3 5 0 0 4 8 1
// Your Output: 
// 3 5 4 8 1 0 0
// Expected Output: 
// 3 5 4 8 1 0 0
