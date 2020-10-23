#include <iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
	     int arr[10][10],f=0;
	     for(int i=0;i<10;i++)
	     {
	          for(int j=0;j<10;j++)
	          {
	               cin>>arr[i][j];
	               if(arr[i][j]<=30)
	               f++;
	               
	          }
	     }
	     if(f>=60)
	     cout<<"yes"<<endl;
	     
	     else cout<<"no"<<endl;
	}
	return 0;
}
    