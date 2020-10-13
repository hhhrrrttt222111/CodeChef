#include <bits/stdc++.h>
using namespace std;

long long fact(int n){
	long long ans=1;
	for(int i=1;i<=n;i++){
		ans*=i;
	}
	return ans;
}

int main(){
ios::sync_with_stdio(false);
cin.tie(0);

int tt;
cin >> tt;
while(tt--){
	int n;
	cin >> n;
	if(n==0 || n==1){
		cout << 1 << endl;
	}else{
		cout << fact(n) << endl;
	}
}
return 0;
}