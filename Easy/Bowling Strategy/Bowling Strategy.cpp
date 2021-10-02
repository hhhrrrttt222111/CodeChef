#include <bits/stdc++.h>
#include<iostream>
#include<string.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test,n,k,l,ch;
    cin>>test;
    while(test--)
    {
        cin>>n>>k>>l;
        ch=k*l;
        if(n<=ch && k>1)
        {
            int temp=1;
            for(int i=0;i<n;i++,temp++)
            {
                cout<<temp<<" ";
                if(temp==k)
                    temp=0;
            }
        }else if(k==1 && n==1)
            cout<<"1";
        else
            cout<<"-1";

        cout<<endl;

    }

}
