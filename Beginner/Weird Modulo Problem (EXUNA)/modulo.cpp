#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int t, N;
	cin >> t;

    while(t--) {
        cin>>N;
        int A[N], m=INT_MAX;
        for(int i=0; i<N; i++){
            cin>>A[i];
            if(A[i]<m) {
	            m=A[i];
	        }
        }
        cout<<m<<endl;
    }

	return 0;
}
