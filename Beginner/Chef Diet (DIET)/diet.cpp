#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--) {
        int N, K;
        cin>>N>>K;
        int A[N];
        for(int i=0;i<N;i++)
           cin>>A[i];
        int sum = 0;
        int i;
        for(i=0;i<N;i++) {
            sum += A[i];
            sum = sum-K;

            if(sum<0) {
                cout<<"NO "<<i+1<<endl;
                break;
            }
        }
        if(i==N)
           cout<<"YES"<<endl;
    }
}