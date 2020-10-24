#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t-->0) {
        int A[5];
        for(int i=1;i<=5;i++) {
            cin>>A[i];
        }
        int P;
        cin>>P;
        int s=0;
        for(int i=1;i<=5;i++) {
            s += A[i]*P;
        }
        if(s<=120) {
            cout<<"No"<<endl;      
        }
        else {
            cout<<"Yes"<<endl;
        }
        
	}
	return 0;
}
