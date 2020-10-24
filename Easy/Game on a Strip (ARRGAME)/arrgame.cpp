#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	long long t;
	cin>>t;
	while(t--)
	{
	    long long n;
	    cin>>n;
	    vector<long long> v(n);
	    for(long long i=0;i<n;i++)
	        cin>>v[i];
	    vector<long long> max;
	    long long start=1,count=0;
	    for(long long i=1;i<n;i++)
	    {
	        if(v[i]==0)
	        {
	            count++;
	            if(start==1)    start=0;
	        }
	        if(v[i]==1)
	        {
	            if(start==0)
	            {
	                if(count!=0)max.push_back(count);
	                count=0;
	                start=1;
	            }
	        }
	    }
	    if(count!=0)    max.push_back(count);
	    //cout<<"\n";
	    //for(long long i=0;i<max.size();i++)
	    //    cout<<max[i]<<" ";
	    //cout<<"\n";
	    if(max.size()==0){ cout<<"No\n"; continue;}
	    if(max.size()==1)
	    {
	        if(max[0]%2!=0)cout<<"Yes\n";
	        else cout<<"No\n";
	        continue;
	    }
	    sort(max.begin(),max.end());
	    long long large=max[max.size()-1],seclarge=max[max.size()-2];
	    //cout<<large<<" "<<seclarge<<endl;
	    if(ceil(large*1.0/2)>seclarge && large%2!=0)  cout<<"Yes\n";
	    else    cout<<"No\n";
	}
	return 0;
}