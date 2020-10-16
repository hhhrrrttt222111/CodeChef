#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,sum=0;
	    cin>>n>>x;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        sum+=a[i];
	    }
	    int buy_1=sum/x;
	    sort(a,a+n);
	    int buy_2=(sum-a[0])/x;
	    if(buy_1==buy_2)                    //check if extra banknotes present
	    {
	        cout<<"-1"<<"\n";
	    }
	    else
	    {
	        cout<<buy_1<<"\n";
	    }
	 }
	return 0;
}
