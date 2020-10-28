#include<bits/stdc++.h>
using namespace std;
#define jaadu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int main()
{
	jaadu;
	int n;
	cin>>n;
	int c[n],t[n];

	for(int i=0;i<n;i++){
		cin>>c[i];
	}
	for(int i=0;i<n;i++){
		cin>>t[i];
	}
	int tw = 100000;
	int w = 100000;
	int tr = 100000;
	for(int i=0;i<n;i++){
		if(t[i]==3){
			if(c[i]<tw)
			tw = c[i];
		}
		else{
			if(t[i]==1){
				if(c[i]<w)
				w = c[i];
			}
			if(t[i]==2){
				if(c[i]<tr)
				tr = c[i];
			}
		}
	}
	int res;
	if(tw<(tr+w))res = tw;
	else res = tr+w;
	cout<<res<<endl;
	return 0;
}

