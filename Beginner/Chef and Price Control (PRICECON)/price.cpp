#include <bits/stdc++.h>
using namespace std;
int main()  {
    int t;
    cin>>t;
    
    while(t--) {
        int N,K, sum=0, tot=0;
        cin>>N>>K;
        int arr[N];
        for(int i=0;i<N;i++) {
            cin>>arr[i];
            tot = tot+arr[i];
            if(arr[i]>K) 
                arr[i]=K;
            sum = sum+arr[i];
        }
        cout<<tot-sum<<endl;
    }
}
