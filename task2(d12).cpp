//task2 day12
//Problem Link : https://practice.geeksforgeeks.org/problems/first-element-to-occur-k-times5150/1

class Solution{
    public:
    int firstElementKTime(int a[], int n, int k)
    {
        int b[200]={0};
        for(int i=0;i<n;i++){
            b[a[i]]++;
            if(b[a[i]]==k){
                return a[i];
                break;
            }
        }
        return -1;
        
    }
};


// For Input: 
// 7 2
// 1 7 4 3 4 8 7
// Your Output: 
// 4
// Expected Output: 
// 4
