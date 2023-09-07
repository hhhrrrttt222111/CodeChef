#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	  int w1,w2,x1,x2,m;
	  cin>>w1>>w2>>x1>>x2>>m;
	  int a=w2-w1;
		int b=x1*m;
		int c=x2*m;
		if(b<=a && a<=c)
		  cout<<1<<"\n";
		else
		  cout<<0<<"\n";
	}
	return 0;
}
