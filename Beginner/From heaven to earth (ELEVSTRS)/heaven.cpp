#include <iostream>
#include<math.h>
using namespace std;

int main() {

	int t;
	cin>>t;
	while(t--) {
	    float N, S, E;
	    float x, y;
	    cin >> N >> S >> E;
	    x = (sqrt(2)*N)/S;
	    y = 2*N/E;

	    if(x>y)
	        cout<<"Elevator"<<endl;
	    else
	        cout<<"Stairs"<<endl;
	}
	return 0;
}
