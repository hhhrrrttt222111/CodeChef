#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {

	    int num, rev=0, temp;
	    cin >> num;
	    temp = num;
	    
	    while(temp>0) {
            rev = rev*10 +temp %10;
            temp = temp/10;
	    }
	    
	    if(rev==num)
	        cout<<"wins"<<endl;
	    else
	        cout<<"loses"<<endl;
	}
	return 0;
}