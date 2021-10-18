#include <iostream>

using namespace std;

/*
Approach : we will maintain an array to store the solution for overlapping subproblems : Recursion + Memoisation
*/

int cnt=0;

int fibonacciSeriesOptmized(int n,int dp[])
{
    cnt++;
    if(n==0 || n==1)
    {
        //base case 

        return n;
    }

    //recursive 
    //Look up step :

    if(dp[n]!=0)
    {
        return dp[n];
    }

    int ans=fibonacciSeriesOptmized(n-1,dp)+fibonacciSeriesOptmized(n-2,dp);

    return dp[n]=ans;   
}

int main()
{
    int dp[100]={0};
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        cout<<fibonacciSeriesOptmized(n,dp)<<endl;
    }

    cout<<cnt<<endl;

    return 0;
}