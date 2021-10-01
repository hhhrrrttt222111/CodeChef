#include <bits/stdc++.h>
using namespace std;

void bmi()
{   int m,h,b;
    cin>>m>>h;
    b=m/(h*h);

    if(b >= 19 && b<= 24) 
        cout<<2<<endl;
    else if(b >= 25 && b <= 29) 
        cout<<3<<endl;
    else if(b <= 18) 
        cout<<1<<endl;
    else 
        cout<<4<<endl;
    
    
}


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    bmi();
	}
	return 0;
}
