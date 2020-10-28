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
		int n, count = 0, mini = 0, countOfPrevDays = 0;
		cin>>n;
		vector<int>arr(n+5);
		for (int i = 0; i < n; ++i){
			cin>>arr[i];
		}
		mini = arr[0];
		count++;
		for(int i=1;i<n;i++){
			if(countOfPrevDays < 5){
				if(arr[i]< mini){
					count++;
					mini = arr[i];
				}
				countOfPrevDays++;
			}else{
				int prevDays = 0, j = 1;
				while(j <= 5){
					if(arr[i] < arr[i - j]){
						prevDays++;
					}
					j++;
				}
				if(prevDays == 5){
					count++;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}