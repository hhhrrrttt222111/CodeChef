#include <iostream>
using namespace std;
#include <cmath>
#include <algorithm>
#include<map>
#include<vector>
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        map<string,vector<char>>m;
        map<string,vector<char>> :: iterator i1,j1;;
        string s;
        string list[n],copy_list1, copy_list2;
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> s;
            if(s.length()>0)
            {
                m[s.substr(1)].push_back(s[0]);
            }
        }
        sort(list, list + n);
        for (ll i = 0; i < n; i++)
        {
            for (ll j = i+1; j < n; j++)
            {
                copy_list1 = list[i];
                copy_list2 = list[j];
                swap(copy_list1[0], copy_list2[0]);
                if (copy_list1[0] == copy_list2[0] ||  (copy_list1 == copy_list2))
                {
                    
                }
                else if( (!(binary_search(list,list+n,copy_list1))) && (!(binary_search(list,list+n,copy_list2))))
                {
                    ans += 2;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
