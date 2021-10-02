#include <bits/stdc++.h>
using namespace std;

const int N = 5000;

int n,ans;
int a[N],dp[N];

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> n;
    for(int i = 0;i < n;i++) cin >> a[i];
    for(int i = 0;i < n;i++)
    {
        dp[i] = 1;
        for(int j = 0;j < i;j++) if(abs(a[i])>abs(a[j]) and ((a[i]==abs(a[i]))^(a[j]==abs(a[j])))==1) dp[i] = max(dp[i],dp[j]+1);
        ans = max(ans,dp[i]);
    }
    cout << ans;
}
