class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int max=0;
         sort(intervals.begin(),intervals.end()); 
        for(int i=0;i<intervals.size();i++){
            if(intervals[i][1]>max){
                max=intervals[i][1];
            }
        }
        int a[max+1];
        for(int i=0;i<max+1;i++){
            a[i]=0;
        }
        int temp=0;
        for(int i=0;i<intervals.size();i++){
            if(a[intervals[i][0]]==0)
            temp=temp+1;

            for(int j=intervals[i][0];j<=intervals[i][1];j++){
                a[j]=temp;
            }
        }
        vector<vector<int>> ans;
        int i=1;
        int start,end;
        vector<int> use;
        for(int k=0;k<max+1;k++){
            if(k==0 && a[0]>0){
                start=k;
                use.push_back(start);
            }
            else if(k!=0 &&  a[k]>a[k-1]){
                start=k;
                use.push_back(start);
            }
            if(a[k]>0 && (k==max || a[k+1]>a[k] || a[k+1]==0)){
                end=k;
                use.push_back(end);
                ans.push_back(use);
                use.clear();
            }
        }
        return ans;
    }
};
