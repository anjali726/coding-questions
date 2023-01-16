//task2 day16
//problem link : https://leetcode.com/problems/find-smallest-letter-greater-than-target/description/

#include<bits/stdc++.h>
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
       char max='}';
       for(int i=0;i<letters.size();i++){
           if(letters[i]>target && max>letters[i] ){
               max=letters[i];
           }
       }
       if(max=='}'){
           max=letters[0];
       }
       return max;
    }
};



// Input
// letters =
// ["c","f","j"]
// target =
// "a"
// Output
// "c"
// Expected
// "c"
