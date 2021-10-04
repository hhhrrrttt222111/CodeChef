#include <iostream>
#include <cmath>
using namespace std;

void solve()
{
    int n;
    cin>>n;                      //Input number of vectors
    
    /* LOGIC:
    
        We will normalize each position vector and then, scale it
        so that each position vector has the same magnitude. After that,
        since all the vectors have different direction, no 3 points will
        be collinear.
        
    */
    
    for(int i=0; i<n; i++)
    {
        int x, y;
        cin>>x>>y;                      //Input vector components
        double mag = sqrt(x*x + y*y);   //Magnitude of the vector
        double a = 1e9/mag;
        long int scf = (long) a;          //Scaling Factor
        cout<<x*scf<<" "<<y*scf<<"\n";  //Final Scaled Coordinates
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

