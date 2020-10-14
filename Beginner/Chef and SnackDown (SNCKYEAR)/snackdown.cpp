#include <iostream>
using namespace std;

int main() {
	int a ;
	int b ; 
	cin >> a ; 
	while(a--){
	   cin >> b ;
	   if(b == 2010 || b == 2015 || b == 2016 || b == 2017  || b == 2019){
	       cout << "HOSTED"<< endl ;
	   }
	   else {
	       cout << "NOT HOSTED"<< endl ;
	   }
	}
	return 0;
}