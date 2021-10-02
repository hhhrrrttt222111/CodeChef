//https://www.codechef.com/problems/FREQARRY
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	 int n,flag=0;
	 cin>>n;
	 int arr[n];
	 for(int i=0;i<n;i++)
	 {
	     cin>>arr[i];
	 }
	 
	 for(int i=0;i<n-1;i++)
	 {
	   for(int j=i+1;j<n;j++)
	   {
	       if(arr[i]==arr[j])
	       {
	           flag++;
	           break;
	           
	       }
	   }
	 }
	 
	 if(flag==0)
	 cout<<"prekrasnyy"<<endl;
	 else
	 cout<<"ne krasivo"<<endl;
	 
	    
	}
	return 0;
}
