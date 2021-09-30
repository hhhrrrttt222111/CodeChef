/* September Lunchtime 2021- Division 3- Two dishes (TWODISH)*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	    int n, a, b, c, d;
	    cin>>n>>a>>b>>c;
	    d=a+c;
	    
	    if(b>=n){
	        if(a>=n || c>=n || d>=n){
	            cout<<"YES"<<endl;
	        }
	        else {
	              cout<<"NO"<<endl;
	        }
	    }

	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
