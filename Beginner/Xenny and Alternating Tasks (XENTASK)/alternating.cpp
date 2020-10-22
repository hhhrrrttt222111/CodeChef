#include <iostream>
using namespace std;

int main() {
	int t, a[20000], b[20000];
	cin>>t; 
	while(t--) {
	    int x=0, y=0;
	    int n; 
	    cin>>n; 
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    for(int j=0;j<n;j++) {
	        cin>>b[j];
	        if(j%2==0) {
	            x += a[j];
	            y += b[j];
	        }
	        else {
	            x += b[j];
	            y += a[j];
	        }
	    }
	    if(x<y) 
	        cout<<x; 
	    else 
	        cout<<y; 
	    cout<<endl; 
	}
	return 0;
}

