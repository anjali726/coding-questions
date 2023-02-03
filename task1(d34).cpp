//task1 day34
//Problem Link : https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1?fbclid=IwAR1guti4ltzDq7xJQEx1WVHBpyohoOPjEAW5dqjt_hEGGaOiaj3NekpCzac

vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
        long long int i=0;
        long long int j=0;
        vector<long long> ans;
        int n=1;
        long long int a[n];
        a[0]=0;
        while(j<N){
            if(A[j]<0){
                if(a[0]==0){
                    a[0]=A[j];
                }
            }
            if(j-i+1 == K){
                ans.push_back(a[0]);
                if(A[i]<0){
                    a[0]=0;
                    i++;
                    j=i;
                }
                else{
                i++;
                j++;}
            }
            else
                j++;
        }
        return ans;
 }


// For Input: 
// 5
// -8 2 3 -6 10
// 2
// Your Output: 
// -8 0 -6 -6
// Expected Output: 
// -8 0 -6 -6
