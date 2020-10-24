#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, N, L, G;
	cin>>t;
	for(int i = 0; i<t; i++) {
		cin>>N;
		int L[N], G[N];
		for(int r=0; r<N; r++) {
			cin>>L[r];
		}
		for(int r=0; r<N; r++) {
			cin>>G[r];
		}
		int a = 0, b = 0;
		for(int r=0; r<N; r++) {
			if(L[r]>G[r]) {
				a++;
			}
			if(L[r]>G[N-r-1]) {
				b++;
			}
		}
		if(a==0 && b==0) {
			cout<<"both"<<endl;
		} 
        else if(a==0 && b!=0) {
			cout<<"front"<<endl;
		} 
        else if (a!=0 && b==0) {
			cout<<"back"<<endl;
		} 
        else {
			cout<<"none"<<endl;
		}
	}
	return 0;
}