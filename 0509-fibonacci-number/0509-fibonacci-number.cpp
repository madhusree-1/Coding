class Solution {
public:
int dp[31];
    int fib(int n) {
        //basecase n==0 fib =0
        // n==1 fib =1 and n==2 fib =1;
        if(n==0){
            return 0;
        }
        if(n==1 || n==2){
            return 1;
        }
        dp[n]=fib(n-1)+fib(n-2);
        return dp[n];
    }
};