#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
    cin>>t;
	while(t--) {
	    int N;
	    cin>>N;
	    int r;
	    for(int i=N+1; i<N+2000; i++) {
	        int c = 0;
	        int q = i;
	        while(q) {
	            r = q%10;
	            if(r==3){
	                c++;
	            }
	        q = q/10;
	        }

	        if(c>=3){
	             cout<<i<<endl;
	            break;
	        }
	    }
	}
	return 0;
}
