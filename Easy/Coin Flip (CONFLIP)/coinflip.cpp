#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int testCase;
	cin>>testCase;
	for(int y = 0;y<testCase;y++)
	{
    	int noOfRounds;
    	cin>>noOfRounds;
    	for(int x =0;x < noOfRounds;x++)
    	{
        	long int i,n,q;
        	cin>>i >> n >> q;
            if(i == 1)        	
            {
                if(q==1)
                {
                    cout<< n/2<<endl;
                    
                }
                else
                {
                    cout << n - n/2<<endl;
                }
            }
            else
            {
                if(q==2)
                {
                    cout<< n/2<<endl;
                    
                }
                else
                {
                    cout << n - n/2<<endl;
                }                
            }
    	}
	}
    
	
	return 0;
}
