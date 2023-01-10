//task2 day 10
//Problem Link : https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        string ans="";
        int index=0;
        int i;
        int count=0;
        for(i=S.size()-1;i>=-1;i--){
            
            if(S[i]!='.' && i!=-1){
                count++;
            }
            else if(S[i]=='.' || i==-1){
                for(int temp=i+1;temp<=i+count;temp++){
        
                    ans+=S[temp];
                }
                if(i!=-1){
                ans+='.';}
                count=0;
            }
        }
        
        return ans;
    } 
};



// For Input: 
// i.like.this.program.very.much
// Your Output: 
// much.very.program.this.like.i
// Expected Output: 
// much.very.program.this.like.i
