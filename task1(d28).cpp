//task1 day28
//Problem Link :

class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int count=0;
        int t=num;
        long use=pow(10,k);
        long use1=pow(10,k-1);
        while(num>=use1){
            int temp=num%use;
            if(temp!=0 && t%temp==0)
                count++;
            cout<<temp<<" ";
            num=num/10;
        }
        return count;
    }
};

// Input
// num =
// 30003
// k =
// 3
// Output
// 1
// Expected
// 1
// Stdout
// 3 0 300 
