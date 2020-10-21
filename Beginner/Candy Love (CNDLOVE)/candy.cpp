#include <iostream>
using namespace std;

int main() {
	int t, j;
	cin>>t;
	for(j=0; j<t; j++) {
        int i, N;
        cin>>N;
        int a[N], s=0;
        for(i=0; i<N; i++) {
            cin>>a[i];
            s=s+a[i];
        }
        if(s%2==0) {
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }
	}
}
