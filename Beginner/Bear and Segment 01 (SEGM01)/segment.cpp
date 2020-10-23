#include <bits/stdc++.h>   
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--) { 
        int i,j,k,n,o=0,c=0;
        string S;
        cin>>S;
        for(i=0;i<S.length();i++) {
            if(S[i]=='1') o++;
        }

        for(i=0;i<S.length();i++) {
            if(S[i]=='1') {
                while(S[i]=='1') {
                    c++;
                    i++;
                }
                break;
            }
        }
        if(c==o && o!=0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}