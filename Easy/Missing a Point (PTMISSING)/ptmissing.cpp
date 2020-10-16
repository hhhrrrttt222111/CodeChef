#include<bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int T;
	cin>>T;
	while(T--) {
		int n;
		cin>>n;
		int ans_x=0, ans_y=0;
		for(int i=0;i<4*n-1;++i) {
		    int x,y;
		    cin>>x>>y;
		    ans_x^=x;
		    ans_y^=y;
		}
		cout<<ans_x<<" "<<ans_y<<"\n";
	}
	return 0;
}