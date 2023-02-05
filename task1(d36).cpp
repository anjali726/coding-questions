//task1 day36
//Problem Link : https://practice.geeksforgeeks.org/problems/search-insert-position-of-k-in-a-sorted-array/1?fbclid=IwAR0eO8Vxz2sbqLYAM1BXGdPBOVndgpQbOYlnjks1tmoHCnf6OCZ3k82yscM

//User function Template for C++

class Solution{
    public:
    int search(vector<int> Arr,int start,int end,int k,int n){
        if(end>=start){
            int mid=start+(end-start)/2;
            // cout<<mid<<" "<<Arr[mid]<<" ";
            if(Arr[mid]==k || (mid==0 && Arr[mid]>k)){
                return mid;
            }
            
            else if(mid+1<n && k>Arr[mid] && k<Arr[mid+1] || mid+1==n){
                return mid+1;
            }
            else if(Arr[mid]>k){
                return search(Arr,start,mid-1,k,n);
            }
            else{
                return search(Arr,mid+1,end,k,n);
            }
        }
        
    }
    int searchInsertK(vector<int>Arr, int N, int k)
    {
        // code here
        return search(Arr,0,N-1, k,N);
    }
};


// For Input: 
// 4
// 1 3 5 6
// 7
// Your Output: 
// 4
// Expected Output: 
// 4
