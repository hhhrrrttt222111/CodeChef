#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int setBitNumber(int n)
{
    n |= n >> 1;
    n |= n >> 2;

    n |= n >> 4;
    n |= n >> 8;
    n |= n >> 16;
    n = n + 1;
    return (n >> 1);
}

int main() {
	int t;
	cin>>t;
	while(t--)
    {
        int x;
        cin>>x;
        if(x==0)
        {
            cout<<1<<endl;
            continue;
        }
        else if(x==1)
        {
            cout<<2<<endl;
            continue;
        }
        if(ceil(log2(x+1)) == floor(log2(x+1))) x++;
        int m=setBitNumber(x);
        cout<<m<<endl;
    }
	return 0;
}
