#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-->0)
	{
	    int n,m;
	    cin>>n>>m;
	    int arr[m]={0};
	    int d,v;
	    for(int i=0;i<n;i++)
	    {
	        cin>>d>>v;
	        if(arr[d-1]<v)
	        {
	            arr[d-1]=v;
	        }
	    }
	    sort(arr,arr+m);
	    long long tot=arr[m-2]+arr[m-1];
	    cout<<tot<<endl;
	}
	return 0;
}
