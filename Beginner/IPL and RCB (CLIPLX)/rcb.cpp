using namespace std;

#include <iostream>


int main() {

	int t;
	cin>>t;
	
	for(int i=0; i<t; i++) {
	    int X,Y;
	    cin>>X>>Y;
	    
	    if(X<=Y) {
	        cout<<"0"<<endl;
	    }
	    else {
	        cout<<X-Y<<endl;
	    }
	}
	return 0;
}
