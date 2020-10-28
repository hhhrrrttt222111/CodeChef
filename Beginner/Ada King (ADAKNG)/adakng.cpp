#include<bits/stdc++.h>
using namespace std;
#define jaadu ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
typedef unsigned long long int uli;
int  chessBoard(int r, int c, int k){
	int left = (c - k) < 1 ? 1 : (c-k);
	int right = (c + k) > 8 ? 8 : (c + k);
	int top = (r - k) < 1 ? 1 : (r - k);
	int bottom = (r + k) >8 ? 8 : (r + k);

	int length = right - left + 1;
	int breadth = bottom - top + 1;

	return length*breadth;
}
int main()
{
	jaadu;
	int t;
	cin>>t;
	while(t--){
		int r,c,k;
		cin>>r>>c>>k;
		cout<<chessBoard(r,c,k)<<endl;
	}
	return 0;
}