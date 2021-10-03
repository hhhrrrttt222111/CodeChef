/*

The tabulated program for a given problem builds a table in bottom-up fashion and 
returns the last entry from the table. For example, for the same Fibonacci number, 
we first calculate fib(0) then fib(1) then fib(2) then fib(3), and so on. So literally,
we are building the solutions of subproblems bottom-up. 

*/


class Solution {
public:
    
    int fib(int n) {
        if(n == 0)
            return 0;
        int dp[n + 1];
        dp[0] = 0;
        dp[1] = 1;
        
        for(int i = 2; i <= n; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];       
        
    }
};