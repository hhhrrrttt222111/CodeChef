#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,sum=0;
        cin>>n>>k;
        vector<int>v(n),arr(32);
        for(int i=0;i<n;i++)
            cin>>v[i];
        for(int i=0;i<32;i++)
            arr[i]=0;
        for(int i=0;i<n;i++)
        {
            int number=v[i];
        	int count = 0,mask = 1;
        	for (int i = 0; i < 32; i++)
        	{
        		if ((mask & number) == mask)
        			arr[i]++;
        		mask = mask << 1;
        	}
        }
        for(int i=0;i<=32;i++)
            if(arr[i]!=0)
                sum+=ceil(arr[i]/float(k));
        cout<<sum<<endl;
    }
    return 0;
}
