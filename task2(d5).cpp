//task2 day5
//problem link : https://practice.geeksforgeeks.org/problems/replace-all-0s-with-5/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article


int convertFive(int n) {
    // Your code here
    int ans=0;
    int p,q=0;
    while(n>0){
        p=n%10;
        if(p==0){
            ans+=pow(10,q)*5;
        }
        else{
            ans+=pow(10,q)*p;
        }
        q++;
        n=n/10;
    }
    return ans;
}



// For Input: 
// 1404
// Your Output: 
// 1454
// Expected Output: 
// 1454
