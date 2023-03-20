class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int size=arr[arr.size()-1]+1;
        int a[size];
        for(int i=0;i<size;i++){
            a[i]=0;
        }
        for(int i=0;i<arr.size();i++){
            a[arr[i]]=1;
        }
        int count=0;
        for(int i=1;i<size;i++){
            if(a[i]==0){
                count++;
            }
            if(count==k){
                return i;
            }
        }
        int temp=k-count;
    return arr[arr.size()-1]+temp;
    }
};
