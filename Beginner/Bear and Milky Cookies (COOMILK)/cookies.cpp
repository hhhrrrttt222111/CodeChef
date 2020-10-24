#include<bits/stdc++.h>
using namespace std;


int main() {
   int t, n, f=0;
   cin>>t;
   while(t--) {
        f = 0;
        cin>>n;
        string s[n];
        for(int i=0;i<n;i++) {
            cin>>s[i];
        }
        for(int i=0;i<n;i++){
            if(s[i]=="cookie" && s[i+1]!="milk"){
            f = 1;
            }
        }
        if(f==0) 
            cout<<"YES"<<endl;
        else 
            cout<<"NO"<<endl;
   }
   return 0;
}