#pragma GCC optimize("01")
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod=998244353;
const int Max=4e5+1;
const ll Inf=1e18;
int n,k;
int prefixBit[Max][31];
ll arr[Max];
ll power[31];
int maxBit[Max];


ll subarrays(vector<int> v)
{
	ll ans=0;
	ll temp[2]={1,0},val=0;
	int n=v.size();
	int cnt=0;
	
	for(int i=0;i<n;i++)
	{
		val=(val+v[i])%2;
		temp[val]++;
		if(v[i]==1){cnt++;}
	}
	
	ans=temp[0]*temp[1];
	
	return (ans-cnt);
}


ll get2(int a,int b)
{
	int val=a^b;
	for(ll bit=30;bit>=0;bit--)
	{
		if((val&(1<<bit))){return power[bit];}
	}
	return 0;
}


ll get3(vector<ll> v)
{
	ll ans=Inf;
	string str="123";
	
	do
	{
		ll prev=v[(str[0]-'0')];
		for(int i=1;i<str.length();i++)
		{
			int val=str[i]-'0';
			prev^=v[val];
			for(ll bit=30;bit>=0;bit--)
			{
				if((prev&(1<<bit))){prev=power[bit];break;}
			}
		}
		ans=min(ans,prev);
		
	}while(next_permutation(str.begin(),str.end()));
	
	
	return ans;
}


ll get4(vector<ll> v)
{
	ll ans=Inf;
	string str="1234";
	
	do
	{
	    ll prev=v[(str[0]-'0')];
		for(int i=1;i<str.length();i++)
		{
			int val=str[i]-'0';
			prev^=v[val];
			for(ll bit=30;bit>=0;bit--)
			{
				if((prev&(1<<bit))){prev=power[bit];break;}
			}
		}
		ans=min(ans,prev);
		
	}while(next_permutation(str.begin(),str.end()));
	
	ll ans1,ans2,ans3;
	
	ans1=v[1]^v[2];
	for(ll bit=30;bit>=0;bit--){if((ans1&(1<<bit))){ans1=power[bit];break;}}
	
	ans2=v[3]^v[4];
	for(ll bit=30;bit>=0;bit--){if((ans2&(1<<bit))){ans2=power[bit];break;}}
	
	ans3=ans1^ans2;
	for(ll bit=30;bit>=0;bit--){if((ans3&(1<<bit))){ans3=power[bit];break;}}
	
	ans=min(ans3,ans);
	
	
	
	ans1=v[1]^v[3];
	for(ll bit=30;bit>=0;bit--){if((ans1&(1<<bit))){ans1=power[bit];break;}}
	
	ans2=v[2]^v[4];
	for(ll bit=30;bit>=0;bit--){if((ans2&(1<<bit))){ans2=power[bit];break;}}
	
	ans3=ans1^ans2;
	for(ll bit=30;bit>=0;bit--){if((ans3&(1<<bit))){ans3=power[bit];break;}}
	
	ans=min(ans3,ans);
	
	
	ans1=v[1]^v[4];
	for(ll bit=30;bit>=0;bit--){if((ans1&(1<<bit))){ans1=power[bit];break;}}
	
	ans2=v[2]^v[3];
	for(ll bit=30;bit>=0;bit--){if((ans2&(1<<bit))){ans2=power[bit];break;}}
	
	ans3=ans1^ans2;
	for(ll bit=30;bit>=0;bit--){if((ans3&(1<<bit))){ans3=power[bit];break;}}
	
	ans=min(ans3,ans);
	
	
	return ans;
}



int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	power[0]=1;
	for(int i=1;i<=30;i++){power[i]=2*power[i-1];power[i]%=mod;}
	
	
	cin>>n;
	for(int i=1;i<=n;i++){cin>>arr[i];}
	
	
	for(int i=1;i<=n;i++)
	{
		for(ll j=0;j<31;j++)
		{
			prefixBit[i][j]=prefixBit[i-1][j];
			if((arr[i]&(1<<j)))prefixBit[i][j]+=1;
		}
	}
	
	ll finalans=0;
	
	
	for(int i=1;i<=n;i++){finalans+=arr[i];finalans%=mod;}
	
	
	for(int i=1;i<=n-1;i++)
	{
		bool check=true;
		
		for(int bit=30;bit>=0;bit--)
		{
			if((prefixBit[i+1][bit]-prefixBit[i-1][bit])%2){check=false;break;}
			if((prefixBit[i+1][bit]-prefixBit[i-1][bit])%2==0 && (prefixBit[i+1][bit]-prefixBit[i-1][bit])!=0){break;}
		}
		
		if(check)
		{
		finalans+=get2(arr[i],arr[i+1]);
		finalans%=mod;
		}
	}
	
	
	for(int i=1;i<=n-2;i++)
	{
		bool check=true;
		
		for(int bit=30;bit>=0;bit--)
		{
			if((prefixBit[i+2][bit]-prefixBit[i-1][bit])%2){check=false;break;}
			if((prefixBit[i+2][bit]-prefixBit[i-1][bit])%2==0 && (prefixBit[i+2][bit]-prefixBit[i-1][bit])!=0){break;}
		}
		
		if(check)
		{
		vector<ll> v;
		v.push_back(0);v.push_back(arr[i]);v.push_back(arr[i+1]);v.push_back(arr[i+2]);
		finalans+=get3(v);
		finalans%=mod;
		}
	}
	
	
	for(int i=1;i<=n-3;i++)
	{
		bool check=true;
		
		for(int bit=30;bit>=0;bit--)
		{
			if((prefixBit[i+3][bit]-prefixBit[i-1][bit])%2){check=false;break;}
			if((prefixBit[i+3][bit]-prefixBit[i-1][bit])%2==0 && (prefixBit[i+3][bit]-prefixBit[i-1][bit])!=0){break;}
		}
		
		if(check)
		{
		vector<ll> v;
		v.push_back(0);v.push_back(arr[i]);v.push_back(arr[i+1]);v.push_back(arr[i+2]);v.push_back(arr[i+3]);
		finalans+=get4(v);
		finalans%=mod;
		}
	}
	
	
	for(int i=1;i<=n;i++){maxBit[i]=-1;}
	
	for(int i=1;i<=n;i++)
	{
		for(int bit=30;bit>=0;bit--)
		{
			if((arr[i]&(1<<bit))){maxBit[i]=bit;break;}
		}
	}
	
	
	
	
	for(int bit=0;bit<=30;bit++)
	{
		ll total=0;
		vector<int> temp;
		for(int i=1;i<=n;i++)
		{
			if(maxBit[i]==bit){temp.push_back(1);}
			else if(maxBit[i]<bit){temp.push_back(0);}
			else if(maxBit[i]>bit)
			{
				if(temp.size()){total+=subarrays(temp);temp.clear();}
			}
		}
		
		if(temp.size()){total+=subarrays(temp);temp.clear();}
		
		total%=mod;
		finalans+=(total*power[bit])%mod;
		if(finalans>=mod)finalans-=mod;
	}
	
	cout<<finalans;
	
	return 0;
}				
