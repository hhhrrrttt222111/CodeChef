#include <iostream>
using namespace std;
#define loop(var,start,stop,step) for(int var=start;var<stop;var+=step)

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	   int n,i,x;
	   cin>>n;
	   int xor_numbers=0;
	   loop(i,0,n,1)
	   {
	       cin>>x;
	       xor_numbers=xor_numbers^x;
	   }
	   if(xor_numbers==0)
	   {
	       cout<<"First"<<"\n";
	       continue;
	   }
	   else
	   {
	       if(n%2==0)
	       {
	           cout<<"First"<<"\n";
	       }
	       else
	       {
	           cout<<"Second"<<"\n";
	       }
	   }
	}
	return 0;
}
