#include <iostream>
using namespace std;
int main() {
	// your code goes here
	long long t;cin>>t;
	while(t--)
	{
	   long long p,a,b,c,x,y;
	   cin>>p>>a>>b>>c>>x>>y;
	   long long anar=(a*x)+b;
	   long long chakri=(a*y)+c;
	   if(anar<chakri)
	   {
	      cout<<p/anar<<"\n";
	   }
	   else
	   cout<<p/chakri<<"\n";
	}
	return 0;
}
