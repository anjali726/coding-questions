//task2 (day 2)
//Remove vowels from string
//Problem link : https://practice.geeksforgeeks.org/problems/remove-vowels-from-string1446/1

#include<bits/stdc++.h>
class Solution{
public:	
		
	string removeVowels(string S) 
	{
	    // Your code goes here
	    int j=0;
	    int n=S.size(); //size of the given string
	    char ans[n]; //string to store answe
	    for(int i=0;i<n;i++){
	        if(S[i]=='a'||S[i]=='e'||S[i]=='i'||S[i]=='o'||S[i]=='u'){
	         continue;
	        }
	        else{
	            ans[j++]=S[i];
	        }
	    }
	    ans[j]='\0';
	    return ans;
	}
};


// For Input: 
// welcome to geeksforgeeks
// Your Output: 
// wlcm t gksfrgks
// Expected Output: 
// wlcm t gksfrgks
