#include <iostream>
using namespace std;

int main() {
	int t, N;
	cin >> t;

    while(t--) {
        cin>>N;
        int A[N], sum=0;;
        for(int i=0; i<N; i++){
            cin>>A[i];
            sum+=A[i];
        }
        int flag=0;
        for(int i=0;i<N;i++){
            if(A[i]==i+1)
             flag++;
        }
        
        if(flag!=N && sum==N*(N+1)/2)
	     cout<<"yes"<<endl;
	    else
	     cout<<"no"<<endl;

    }
	return 0;
}
