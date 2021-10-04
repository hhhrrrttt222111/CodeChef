#include <iostream>
using namespace std;

void solve()
{
    int n, x;
    cin>>n>>x;                      //Input n,x
    
    /* LOGIC:

	First Binary String will be a string of alternating 1s and 0s of length n
	Second Binary String will be a string of alternating 1s and 0s similar to
    	the first binary string, except for the first x digits which will be flipped.

    */
			
    for(int i=0; i<n; i++)          //First Binary String
    {
        cout<<i%2;
    }

    cout<<"\n";

    for(int i=0; i<n; i++) 	    //Second Binary String
    {
        if(i<x)
        {
            cout<<(i+1)%2;
        }
        else
        {
            cout<<i%2;
        }
    }
}

int main() 
{
	int t = 1;
	cin>>t;                         //Input number of Testcases
	while(t--)
	{
	    solve();                    //Solve each testcase independently
	    cout<<"\n";
	}
	return 0;
}
