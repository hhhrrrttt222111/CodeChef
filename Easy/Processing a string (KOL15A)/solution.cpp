#include<iostream>
#include<string>
#include<math.h>
#include<iomanip>
#include<vector>
#include<algorithm>
#define PI 3.142857
#define ll long long
#define MOD 1000000007
#define For for(int i=0;i<n;i++)
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int sum = 0;
        for (int i = 0; i < s.length(); i++){
            if (s[i]>='0' && s[i]<='9'){
                sum += s[i]-'0';
            }
            
        }
        cout<<sum<<endl;
    }
    
    return 0;
}
