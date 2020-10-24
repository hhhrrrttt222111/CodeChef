#include<bits/stdc++.h>
using namespace std;
int main() {
    int t,N,K;
    cin>>t;
    while(t--) {
        cin>>N>>K;
        char A[N+1];
        for(int i=0;i<N;i++)
            cin>>A[i];
        int j = 1;
        int m = K;
        while(K--) {
            if(A[N-j]=='H') {
                for(int p=0;p<(N-j);p++) {
                    if(A[p]=='H')
                        A[p]='T';
                    else
                        A[p]='H';
                }
            }
            j++;
        }
        int c=0;
        for(int i=0;i<N-m;i++) {
            if(A[i]=='H')
                c++;
        }
            cout<<c<<endl;
        }
}