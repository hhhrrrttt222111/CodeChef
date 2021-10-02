#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

const long int n = 1e6+5;
long int result[n];

void numofPrime()
{
    long int count = 0;
    vector<long int>vect;
    bool prime[n];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p*p < n; p++)
    {
        if (prime[p] == true) 
        {
            for (int i = p*p; i < n; i += p)
                prime[i] = false;
        }
    }
 
    for (int p = 2; p < n; p++)
        if (prime[p])
            vect.push_back(p);

    //initializing index of the vector
    auto index = vect.begin();
    
    for (int i = 0; i < n; i++)
    {
        if(*index <= i)
        {
            count++;
            index++;
        }
        result[i] = count;
    }
}

int main() {
   
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   numofPrime();
   
	long int T, X, Y;
	cin >> T;
	while(T--)
	{
	   cin >> X >> Y;
	   
	   if (result[X] > Y)
	        cout << "Divyam\n";
	        
	   else if (result[X] <= Y)
	      cout << "Chef\n";
	}
	return 0;
}
