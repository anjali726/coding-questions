//task1 day12
//Problem Link : https://leetcode.com/problems/count-prefixes-of-a-given-string/description/

class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int count=0;
        for(int i=0;i<words.size();i++){ //traversing the string vector
            string temp=words[i]; //getting first word in temp
            int k=0;
            bool ans=false;
            for(int j=0;j<temp.size();j++){ //traversing the complete word
                if(temp[j]==s[k]){ //cheacking if it satisfies the condition or not
                    ans=true; //if yes true
                    k++;
                }
                else{
                    ans=false; //else false
                    break;
                }
            }
            if(ans==true){ //if true then count++;
                count++;
            }
        }
        return count;
    }
};


// Input
// words =
// ["feh","w","w","lwd","c","s","vk","zwlv","n","w","sw","qrd","w","w","mqe","w","w","w","gb","w","qy","xs","br","w","rypg","wh","g","w","w","fh","w","w","sccy"]
// s =
// "wh"
// Output
// 15
// Expected
// 15
