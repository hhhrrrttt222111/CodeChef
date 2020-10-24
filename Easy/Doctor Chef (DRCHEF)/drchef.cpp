#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
long long solve(vector<long long> v,long long x, long long n)
{
    long long max=1,diff=0;
    priority_queue<long long> maxheap;
    for(auto i:v)
        maxheap.push(i);
    unordered_map<long long, long long> m;
    for(auto i:v)
        m[i]++;
    while(x<maxheap.top())
    {
        max++;
        long long index=lower_bound(v.begin(),v.end(),x)-v.begin();
        if(index!=n)
        {
            if(v[index]==x && m[v[index]]>0)
            {
                m[v[index]]--;
                x*=2;
                diff++;
            }
            else if (index!=0 && v[index-1]*2>=x && m[v[index-1]]>0)
            {
                m[v[index-1]]--;
                x=v[index-1]*2;
                diff++;
            }
            else
            {
                long long maxpop=maxheap.top();
                maxpop=min(maxpop,(maxpop-x)*2);
                maxheap.pop();
                maxheap.push(maxpop);
                x*=2;
            }
        }
        else
            break;
    }
    long long ans=max+(n-1)-diff;
    return ans;
}
int main() {
	//code
	long long t;
	cin>>t;
	while(t--)
	{
	    long long n,x;
	    cin>>n>>x;
	    vector<long long> v(n);
	    for(int i=0;i<n;i++)
	        cin>>v[i];
	    sort(v.begin(),v.end());
	    cout<<solve(v,x,n)<<endl;
	}
	return 0;
}
