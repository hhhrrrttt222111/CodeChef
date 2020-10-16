#include<iostream>
#define ll long long
#define fastIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    fastIO;
    int t;
    cin>>t;
    while(t--)
        {
            	ll n, i, l = 1;
	cin >> n;
	ll a[n], b[n];
	for(i = 0; i < n; i++)
		cin >> a[i];
	b[0] = a[0];
	for(i = 1; i < n; i++)
	{
		if(a[i] <= b[i - 1])
		{
			b[i] = a[i];
			l++;
		}
		else
			b[i] = b[i - 1];
	}
	cout << l << endl;

        }
}
