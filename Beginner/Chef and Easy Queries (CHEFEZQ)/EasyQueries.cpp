#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int tt;
	cin >> tt;
	while(tt--)
	{
        bool done = false;
        long n,k;
        cin >> n >> k;
        long sum = 0, rem = 0,days = 0;
        long i,ans;
        for(i = 0; i < n; i++)
        {
            long ele; cin >> ele;
            if(!done)
            {
                sum = ele + rem;
                if(sum < k && done == false)
                {
                    ans = i;
                    done = true;
                }
                else
                    rem = sum - k;
            }
        }
        if(done) cout << ans + 1 << '\n';
        else
        cout << i + rem/k + 1 << '\n';
	}
	return 0;
}
