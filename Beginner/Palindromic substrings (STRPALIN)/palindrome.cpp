#include<bits/stdc++.h>

using namespace std;
int main() {
    int t;
    cin>>t;
    string a,b;
    while(t--) {
        cin>>a>>b;
        bool f=false;
        for(int i=0;i<a.length();i++) {
            for(int j=0;j<b.length();j++) {
                if(a[i]==b[j])
                {
                    f=true;
                    break;
                }
            }
        }
        if(f)
          cout<<"Yes"<<endl;
          else
          cout<<"No"<<endl;
        
    }
    return 0;
}