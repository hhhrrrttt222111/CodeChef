#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int T;
	long int N, i;
	cin >> T;
	while(T--)
	{
	    cin >> N;
	    long int A[N];
	    for(i=0; i<N; i++)
	        cin >> A[i];
	    
	    sort(A, A+N);
	    long int ans1 = A[1]-A[0] + A[N-1]-A[1] + A[N-1]-A[0];
	    long int ans2 = A[N-2]-A[0] + A[N-1]-A[N-2] + A[N-1]-A[0];
	    long int ans = max(ans1, ans2);
	    cout << ans << endl;
	}
	return 0;
}
