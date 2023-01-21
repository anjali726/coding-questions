//task1 day21
//Problem Link :  https://leetcode.com/problems/valid-palindrome/submissions/882383148/

class Solution {
public:
    bool isPalindrome(string s) {
        string a;
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z'){
                a+=s[i];
            }
            else if(s[i]>='A' && s[i]<='Z'){
                cout<<i;
                char temp=(int)s[i]+32;
                a+=temp;
            }
            else if(s[i]>='0' && s[i]<='9'){
                a+=s[i];
            }
            else{
                continue;
            }
        }
        cout<<a;
        int i=0;
        int j=a.size()-1;
        bool ans=true;
        while(j>=i){
            if(a[i]==a[j]){
                ans=true;
                i++;
                j--;
            }
            else{
                ans=false;
                break;
            }
        }
        return ans;
    }
};


// Input
// s =
// "A man, a plan, a canal: Panama"
// Output
// true
// Expected
// true
