#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--) {
        int n, a, c, d, S=0;
        cin>>c>>d;
        n = c+d;
        while(n!=0) {
            a=n%10;
            if(a==1) 
                S = S+2;
            if(a==4) 
                S = S+4;
            if(a==7) 
                S = S+3;
            if(a==2 ||a==5 || a==3) 
                S = S+5;
            if(a==0)
                S = S+6;
            if(a==8) 
                S = S+7;
            if(a==6 || a==9) 
                S = S+6;
            n = n/10;
        }
        cout<<S<<endl;
    }
}
