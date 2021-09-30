#include <bits/stdc++.h>
using namespace std;
#define PI 3.142857
#define ll long long
#define MOD 1000000007
#define For for(int i=0;i<n;i++)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    string s;
    getline(cin , s); 
    while(t--)
    {
            string s;
            getline(cin , s); 
            string word = "" ;
            string ans = ""; 
            for(int i=0; i<s.length(); i++)
            {
                if(s[i]!=' ')
                {
                    word+=s[i]; 
                }
                else
                {
                    transform(word.begin(), word.end(), word.begin(), ::tolower);
                    ans+=(word[0]>=97 and word[0]<=122 ? word[0]-32:word[0]); 
                    ans+=".";
                    ans+=" "; 
                    word = ""; 
                }
            }
            transform(word.begin(), word.end(), word.begin(), ::tolower);
            if(word[0]>=97 && word[0]<=122)
            {
                word[0] = word[0]-32;
                ans+=word;
            }
            cout << ans <<  endl;
    }
}
