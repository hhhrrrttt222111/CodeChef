/*
SUBMITTED BY: Deadeye001
PROBLEM CODE: TWTCLOSE
DATE: 02/10/21
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,k,c=0;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
	arr[i]=0;
	while(k--)
	{
		string str;
		cin>>str;
		if(str=="CLICK")
		{
			int a;
			cin>>a;
			if(arr[a-1]==0)
			{
				arr[a-1]=1;
				c++;
			}
			else
			{
				arr[a-1]=0;
				c--;
			}
		}
		else
		{
			for(int i=0;i<n;i++)
			arr[i]=0;
			c=0;
		}
		cout<<c<<"\n";
	}
	return 0;
}
