# include <bits/stdc++.h>
using namespace std;
# define ll long long int

ll sum(int a, int n)
{   int s=0,c=0;
	for(int i=a; ; i+=2)
     {
		 s=s+i;
		 if(s==n)
		 {
			 c++;
			 break;
		 }
	 }
	 if(c==1)
	 return 1;
	 else
	 return 0;
}
int main()
{
ll n,k=0; cin>>n;
for(ll i=1;i<n;i++)
{
k=k+sum(i);
}
cout<<k;
}