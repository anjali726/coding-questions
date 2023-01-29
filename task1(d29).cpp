//task1 day29
//Problem Link : https://leetcode.com/problems/reverse-words-in-a-string-iii/description/?fbclid=IwAR0HogRgg7G1mpw0Bt1-SQ_-TK45zjFQf9YwAU_gv_8jKiDOVMiO3lr0vng

class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        int temp=0;
        int j=0;
        string ans;
        while(i<=s.size()){
            if(s[i]==' ' || s[i]=='\0'){
                for(int k=i-1;k>=j;k--){
                    ans+=s[k];
                }
                if(i<s.size()-1)
                 ans+=' ';
                else if(i==s.size()-1)
                 ans+='\0';
                j=i+1;
                i++;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};


// Input
// s =
// "Let's take LeetCode contest"
// Output
// "s'teL ekat edoCteeL tsetnoc"
// Expected
// "s'teL ekat edoCteeL tsetnoc"
