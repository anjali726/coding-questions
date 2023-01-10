//task1 day10
//Problem Link : https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int>& arr){
        
        // Your code here
        for(int i=0;i<arr.size()-1;i+=2){
            swap(arr[i],arr[i+1]);
        }
        
    }
};



// For Input: 
// 6
// 2 4 7 8 9 10
// Your Output: 
// 4 2 8 7 10 9
// Expected Output: 
// 4 2 8 7 10 9
