//Have a good day traveller:)
//Author: Saksham Goel

//Link to the problem: https://www.codechef.com/SEPT20B/problems/FINXOR/

#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#include<math.h>
#include<sstream>
#include<string.h>
using namespace std;
#define MOD 1000000007
#define lli long long int
int main(){
	int T;
	cin>>T;
	while(T--){
		lli n,final_no=0;
		cin>>n;
		lli sum1,sum2;
		cout<<1<<" "<<(lli)pow(2,20)<<endl;
		cin>>sum1;
		sum1-=(lli)pow(2,20)*n;
		for(int i=19;i>0;i--){
			cout<<1<<" "<<(lli)pow(2,i)<<endl;
			cin>>sum2;
			lli temp=(sum1-sum2+(lli)pow(2,i)*n)/((lli)pow(2,i+1));
			if(temp%2!=0){
				final_no++;
				final_no=final_no<<1;
			}
			else
			final_no=final_no<<1;
		}
		if(sum1%2!=0)
		final_no++;
		cout<<"2 "<<final_no<<endl;
		int t2;
		cin>>t2;
		if(t2==1)
		continue;
		else 
		break;
	}
	return 0;
}
