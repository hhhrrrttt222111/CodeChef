#include<iostream>
using namespace std;

int main() {
    int t,a[10000],N,f=0;
    cin>>t;
    while(t>0) {
        cin>>N;
        for(int i=0;i<N;i++) {
            cin>>a[i];
            if(a[i]%2==0)
            {
                f=1;
            }
        }
        if(f==0) {
            cout<<"YES";
        }
        else {
            cout<<"NO";
        }
        cout<<endl;
        f=0;
        t--;
    }
}