#include<bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--) {
        string s;
        cin>>s;
        for(int i=0;i<s.length();i++) {
            if(s[i]=='<')
            s[i]='>';
            else if(s[i]=='>')
            s[i]='<';
        }
        
        int c=0;
        for(int i=0;i<s.length()-1;i++) {
            if(s[i]=='>' && s[i+1]=='<')
            c++;
        }
        cout<<c<<endl;
        
    }
    return 0;
}