#include <iostream>

using namespace std;

/*
(a)each player can pick a number from each end 
(b)both the players are equally wise
(c)if Modi strts the game, what is the maximum margin by which Modi can win the game.

Whatever coin you pick up, you sum the coins till the end

if f(i,j) denotes the maximum score that player 1 can make from i to j

f(i,j)= max(a[i] + min(f(i+1,j-1),f(i+2,j)), a[j] + min(f(i,j-2),f(i-1,j-1)))

our player will choose the maximum profit for himself and will leave behind minimum profit choices for the second player

Base Case : if(i>j) return 0 because there are no coins left to select
Notice that after every move the array is shrinking by two units 
Or you can make if(i+1==j) as the base case since in this condition there will be just 2 elements left in the
array and this time our player will choose the greater of the two element that is max(a[i],a[j])

*/

int optimalGame(int arr[],int i,int j,int dp[][100])
{
	//base case 

	cout<<"For i : "<<i<<" and j : "<<j<<endl;
	if(i>j)
	{
		cout<<"we have hit the base case and the value is : 0"<<endl;

		return 0;
	}

	//lookup step 

	if(dp[i][j]!=0)
	{
		cout<<"The solution of this problem was already calculated which is : "<<dp[i][j]<<endl;
		return dp[i][j];
	}

	//recursive step 

	dp[i][j]=max(arr[i] + min(optimalGame(arr,i+1,j-1,dp),optimalGame(arr,i+2,j,dp)), arr[j] + min(optimalGame(arr,i,j-2,dp),optimalGame(arr,i+1,j-1,dp)));
	cout<<"The solution for this problem is freshly calculated which is : "<<dp[i][j]<<endl;

	return dp[i][j];
}

int main()
{
	int n;
	cin>>n;
	int dp[n][100];

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<100;j++)
		{
			dp[i][j]=0;
		}
	}

	int arr[n];

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	cout<<optimalGame(arr,0,n-1,dp)<<endl;

	return 0;
}