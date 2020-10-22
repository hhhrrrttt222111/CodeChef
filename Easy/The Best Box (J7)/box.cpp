#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	int test;
	cin >> test;
  
	while(test--){
		int P,S;
		double side,volume;
    
		cin>>P>>S;
    
		side=P - sqrt(P*P-24*S);
		side/=12;
		volume=(side*side*side) + S * side/2 - side * side * P/4;
		cout<<fixed<<setprecision(2)<<volume<<endl;
	}
  
}
