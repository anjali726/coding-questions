//task2 day6
//problem link : 
 

#include<bits/stdc++.h>
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        vector<int> ans;
        int i=0,j=0;
        while(i<n && j<m){
            if(arr1[i]<arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            }
            else if(arr2[j]<arr1[i]){
            ans.push_back(arr2[j]);
            j++;
            }
            else{
            ans.push_back(arr2[j]);
            j++;
            i++;
        }
        }
        //print remaining elements of larger array.
       while(i<n){
           ans.push_back(arr1[i]);
           i++;
       } 
       while(j<m){
           ans.push_back(arr2[j]);
           j++;
       }
       return ans;
    }
};

// For Input: 
// 5 3
// 1 2 3 4 5
// 1 2 3
// Your Output: 
// 1 2 3 4 5
// Expected Output: 
// 1 2 3 4 5
