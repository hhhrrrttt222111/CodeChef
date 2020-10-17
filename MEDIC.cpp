#include <iostream>
using namespace std;
bool leap(int y)
{
    if((y%4==0 && y%100!=0)|| y%400==0)
    return true;
    return false;
}
int main() {
	int T;
	char colon1,colon2;
	cin>>T;
	while(T--)
	{
	    int y,m,d;
	    cin>>y>>colon1>>m>>colon2>>d;
	    if(m==2)
	    {
	         if(leap(y))
	         cout<<((29-d)/2)+1<<endl;
	         else
	         cout<<((59-d)/2)+1<<endl;
	    }
	    if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
	    cout<<((31-d)/2)+1<<endl;
	    else if(m==4||m==6||m==9||m==11)
	    cout<<((61-d)/2)+1<<endl;
	   
	}
	return 0;
}
