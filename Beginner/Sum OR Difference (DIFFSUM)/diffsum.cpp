#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int N1;
    cin >> N1;
    int N2;
    cin >> N2;
    if(N1 > N2)
        cout << N1-N2 << endl;
    else
        cout << N1+N2 << endl;
    return 0;
}

