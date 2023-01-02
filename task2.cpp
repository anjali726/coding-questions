#include<bits/stdc++.h>
vector<int> minAnd2ndMin(int a[], int n) {
    vector<int> ans;
    int min=INT_MAX;
    int k;
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
            k=i;
        }
    }
    ans.push_back(min);
    int use=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]>min && use>a[i]){
            use=a[i];
        }
    }
    if(use==INT_MAX){
        ans.pop_back();
        ans.push_back(-1);
    }
    else{
        ans.push_back(use);
    }
    return ans;
}