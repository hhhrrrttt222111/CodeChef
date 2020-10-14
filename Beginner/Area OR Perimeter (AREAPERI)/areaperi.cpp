#include <iostream>
using namespace std;

int main() {
	int l, b; 
	cin >> l; 
	cin >> b; 
	int area = l*b;
	int peri = 2*(l+b);
	if(area > peri ){
	    cout << "Area"<< endl;
	    cout << area ;
	}
	else if(area <peri ){
        cout << "Peri"<< endl;
        cout << peri << endl;
	}
	else {
	    cout << "Eq"<< endl;
	    cout << area << endl;
	}

	return 0;
}