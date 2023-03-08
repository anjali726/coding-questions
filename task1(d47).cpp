//task1 day47
//problem link : https://leetcode.com/problems/count-and-say/description/?fbclid=IwAR2oAdCL9v5Ts4KhF1EhOmCIa_cZaBUNYACrjlWLt1WLFPfM-WsW_ASobyo

class Solution {
public:

    string use(string ans){
        if(ans=="1"){
            return "11";
        }
        
        string a="";
        int count=1;
        int i=1;
        while(i<=ans.size()){
            while(ans[i-1]==ans[i]){
                count++;
                i++;
            }
            a+=to_string(count);
            a+=ans[i-1];
            count=1;
            i++;
            
        }
        return a;
    }
    string countAndSay(int n) {
        string ans=to_string(1);
        for(int i=2;i<=n;i++){
            ans=use(ans);
        }
        return ans;
    }
};



// n =
// 5
// Output
// "111221"
// Expected
// "111221"
