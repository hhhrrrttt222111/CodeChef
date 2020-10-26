#include<bits/stdc++.h>

using namespace std;

int main(){
	int testCase;
	cin>>testCase;
	while(testCase-->0){
		int n;
		cin>>n;
		int v[n],fin[n];
		for(int i=0;i<n;i++){
			cin>>v[i];
			fin[i]=i+1;
		}
		for(int j=n-1;j>=0;j--){
			if(v[j]!=0){
				int x=fin[j-v[j]];
				for(int k=j-v[j];k<j;k++) fin[k]=fin[k+1];
				fin[j]=x;
			}
		}
		for(int i=0;i<n-1;i++){
			cout<<fin[i]<<" ";
		}
		cout<<fin[n-1];
		cout<<endl;
	}
	return 0;
}
