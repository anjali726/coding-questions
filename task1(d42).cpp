//task1 day42
//Problem Link : https://practice.geeksforgeeks.org/problems/45fa306a9116332ece4cecdaedf50f140bd252d4/1?fbclid=IwAR3uku7i_REH7k0kVWCowy4-MDPZXb_YQm4IDzWEGlR0HTck4Ux_DVTPYwk

class Solution{
public:
    int maxInstance(string s){
        int m[26]={0};
        for(int i=0;i<s.size();i++){
            int k=s[i]-97;
            m[k]++;
        }
        int count=0;
        int a=min(m[0],min(m[1],m[13]));
        int b=min(m[11],m[14]);
        b=b/2;
        count=min(a,b);
        return count;
    }
};

