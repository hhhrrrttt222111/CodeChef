#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;

	while(t!=0) {
	    int n;
	    cin>>n;
        int k = 2048, s=0;
        for(int i=k;i>=1;i/=2) {
            s += n/i;
            n %= i;
            if(n==0)
                break;
        }
        cout<<s<<endl;
        t--;
	}
	return 0;
}