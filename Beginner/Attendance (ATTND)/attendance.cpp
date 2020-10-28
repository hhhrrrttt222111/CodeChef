#include<bits/stdc++.h>
using namespace std;
#define jaadu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef unsigned long long int uli;
int main()
{
	jaadu;
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		std::vector<string> firstName(n), lastName(n);
		unordered_map<string, int>hash;
		for(int i=0;i<n;i++){
			cin>>firstName[i];
			cin>>lastName[i];
			hash[firstName[i]]++;
		}
		for(int i=0;i<n;i++){
			if(hash[firstName[i]] <= 1){
				cout<<firstName[i]<<endl;
			}else{
				cout<<firstName[i]<<" "<<lastName[i]<<endl;
			}
		}
	}
	return 0;
}