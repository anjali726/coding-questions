//task2 day46
//problem link : https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/?fbclid=IwAR1Ru8y3JBGsc6FxNGEWME90dPQYPIA2FxIowfXssZ3YpuI2nwbca_sHnY4

class Solution {
public:
bool check(string use,string needle){
    for(int i=0;i<needle.size();i++){
        if(use[i]!=needle[i])
            return false;
    }
    return true;
}
    int strStr(string haystack, string needle) {
        int size=haystack.size();
        int size1=needle.size();
        vector<int> temp;
        for(int i=0;i<size;i++){
            if(needle[0] ==haystack[i]){
                temp.push_back(i);
            }
        }
       
        int ans=-1;
        for(int i=0;i<temp.size();i++){
            int temp1=temp[i];
            if(check(haystack.substr(temp1,temp1+size1),needle)){
                ans=temp1;
                break;
            }
        }
        return ans;
    }
};


// Input
// haystack =
// "hello"
// needle =
// "ll"
// Output
// 2
// Expected
// 2
