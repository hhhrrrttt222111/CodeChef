#include <iostream>
using namespace std;

int main() {
	// your code goes here
     long long int t, n;
    cin >> t;
    while(t--) {
        long long int ans=0;
       cin >> n;
        for(int i=5; i<=n; i=i*5) {
            ans = ans + (n/i);
       }
      cout<<ans<<"\n";
   }
}