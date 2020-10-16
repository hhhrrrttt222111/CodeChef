#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t=0, n=0, c=0;
	int Count =0;
	cin >> t;
	for(int i=0; i<t; i++)
	{
	    cin >> n;
	    while(n>0)
	    {
	        if(n>=100)
	        {
	            c= n/100;
	            n= n%100;
	        }
	        else if(n>=50)
	        {
	            c=n/50;
	            n=n%50;
	        }
	        else if(n>=10)
	        {
	            c=n/10;
	            n=n%10;
	        }
	        else if(n>=5)
	        {
	            c=n/5;
	            n=n%5;
	        }
	        else if(n>=2)
	        {
	            c=c/2;
	            n=n%2;
	        }
	        else if(n>=1)
	        {
	            c=n/1;
	            n=n%1;
	        }
	        Count = Count+c;
	    }
	    cout << Count << endl;
	}
	
	
	return 0;
}
