#include<bits/stdc++.h>
using namespace std;

int main() {
	int x;
	float y;
	cin>>x>>y;
	
	if((x%5==0)&&(y>float(x+0.50))&&(x>0))
	{
	    cout<<y-float(x+0.50) ;
	}
	else
	{
	    cout<<fixed<<setprecision(2)<<y;
	}
	return 0;
}