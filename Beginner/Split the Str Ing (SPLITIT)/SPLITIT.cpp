#include<iostream>
#include<string>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		string str;
		cin >> str;
		n = n - 1;
		int flag = 0;
		for (int ch = 0; ch < n; ch++)
			if (str[ch] == str[n])
			{
				flag = 1;
				break;
			}
		(flag) ? cout << "YES\n" : cout << "NO\n";
	}
	return 0;
}
