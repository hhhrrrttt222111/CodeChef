#include <iostream>
#include <climits>

using namespace std;

/*
Your task is to reduce a number to 1 by following a set of rules:
(a)n=n/3 if n is a multiple of 3
(b)n=n/2 if n is a multiple of 2
(c)n=n-1

In this problem the greedy approach is not going to work
to solve for a particular value of n : i need to take care of the following : 
(a)if n is divisible by 3 then what is the optimal solution for n/3
(b)if n is divisible by 2 then what is the optimal solution for n/2
(c)what is the optimal soltion for n-1
*/

int cnt=0;

int minStepsToOne(int n,int dp[])
{
    cnt++;
    //base case 

    cout<<"Here n is : "<<n<<endl;
    if(n==1)
    {
        return 0;
    }

    //look up step

    if(dp[n]!=0)
    {
        cout<<"This problem was already solved,Thanks to dp array"<<endl;
        return dp[n];
    }

    int op1,op2,op3;
    op1=op2=op3=INT_MAX;

    if(n%3==0)
    {
        op1=minStepsToOne(n/3,dp);
    }
    if(n%2==0)
    {
        op2=minStepsToOne(n/2,dp);
    }
    
    op3=minStepsToOne(n-1,dp);

    cout<<"We just solved this new problem"<<endl;
    return dp[n]=min(min(op1,op2),op3)+1;
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

        cout<<minStepsToOne(n,dp)<<endl<<endl;
    }
    cout<<cnt<<endl;

    return 0;
}