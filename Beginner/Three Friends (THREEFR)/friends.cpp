#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
	    int x,y,z;
	    cin >> x >> y >> z;
	    if((x==y+z) || (y==z+x) || (z==x+y)) {
	        cout<<"yes"<<endl;
	    }
	    else {
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
