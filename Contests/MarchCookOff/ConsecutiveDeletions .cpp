#include<bits/stdc++.h>
#define ll long long 
using namespace std;


int main() {
	

#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	int te;
	cin>>te;
	while(te--){
		int n,k;
		cin>>n>>k;
		int count1=0;
		int a[n];
		
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]==1) count1++;
		}

		/*for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;*/
        int tot=0;
		int mi=k;
		

		for(int i=0;i<k;i++){
			if(a[i]!=0) tot++;
		}

		mi=min(tot,mi);

		for(int i=k;i<n;i++){
			if(a[i-k]!=0) tot--;
			if(a[i]!=0) tot++;
			mi=min(mi,tot);
		}

		cout<<((mi*(long)(mi+1))/2+(count1-mi))<<endl;

	}

	return 0;

	
}
